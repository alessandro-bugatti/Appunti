/*
    Autore: Alessandro Bugatti
    Data: 22/05/2020
    Data di ultima modifica: 22/05/2020
    Versione di snake old-style per esercizio
    finale dell'anno 2019-2020
*/

#include <iostream>
#include <ctime>
#include "../../vsgl2.h"

using namespace std;
using namespace vsgl2;
using namespace vsgl2::general;
using namespace vsgl2::video;
using namespace vsgl2::utils;
using namespace vsgl2::io;

const int DIM = 10;

enum Direzione{ALTO, BASSO, DESTRA, SINISTRA};

/**
    Rappresenta il singolo elemento di un serpente
*/
struct Elemento{
    int dim;/// Dimensione del segmento
    string image;///Immagine con cui viene rappresentato
    int x;
    int y;
};

/**
    Rappresenta tutto il corpo di un serpente
*/

struct Snake{
    Direzione direzione;
    Elemento corpo[100];
    int lunghezza;
};

void init_snake(Snake &s, int x, int y,
                string image, int lun, Direzione dir)
{
    s.lunghezza = lun;
    s.direzione = dir;
    for (int i = 0; i < s.lunghezza; i++)
    {
        s.corpo[i].x = x;
        s.corpo[i].y = y + i;
        s.corpo[i].image = image;
        s.corpo[i].dim = DIM;
    }
}

void disegna_elemento(Elemento e)
{
    draw_image(e.image,e.x*DIM,e.y*DIM,
               e.dim,e.dim,255);
}

void disegna_snake(Snake s)
{
    for(int i = 0; i < s.lunghezza; i++)
        disegna_elemento(s.corpo[i]);
}

void aggiorna_snake(Snake &s)
{
    for (int i = s.lunghezza - 1; i > 0; i--)
        s.corpo[i] = s.corpo[i-1];
    if(s.direzione == ALTO)
        s.corpo[0].y--;
    if(s.direzione == BASSO)
        s.corpo[0].y++;
    if(s.direzione == DESTRA)
        s.corpo[0].x++;
    if(s.direzione == SINISTRA)
        s.corpo[0].x--;

}


int main(int argc, char* argv[]) {

    Snake snake;
    init_snake(snake,10,10,"assets/images/snake.png",10,DESTRA);
    //init the library
    init();

    set_window(512, 512,"Snake");
    set_background_color(Color(0,0,0,255));

    //main loop
    int aggiornamento = ms_time();
    while(!done())
    {
        disegna_snake(snake);
        if (ms_time() - aggiornamento > 200)
        {
            if (is_pressed(VSGL_UP))
                snake.direzione = ALTO;
            if (is_pressed(VSGL_DOWN))
                snake.direzione = BASSO;
            if (is_pressed(VSGL_LEFT))
                snake.direzione = SINISTRA;
            if (is_pressed(VSGL_RIGHT))
                snake.direzione = DESTRA;
            aggiorna_snake(snake);
            aggiornamento = ms_time();
        }
        update();

    }

    //close the library and clean up everything
    close();
    return 0;
}
