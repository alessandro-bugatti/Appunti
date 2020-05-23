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

const int DIM = 20;

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


int main(int argc, char* argv[]) {

    Snake snake;
    init_snake(snake,10,10,"assets/images/snake.png",10,ALTO);
    //init the library
    init();

    set_window(512, 512,"Snake");
    set_background_color(Color(0,0,0,255));

    //main loop
    while(!done())
    {
        disegna_snake(snake);
        update();
    }

    //close the library and clean up everything
    close();
    return 0;
}
