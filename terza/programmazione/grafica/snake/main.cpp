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

const int DIM = 16;
const int LARGHEZZA = 640;
const int ALTEZZA = 640;
const int MAX_X = LARGHEZZA / DIM;
const int MAX_Y = ALTEZZA / DIM;

enum Direzione {ALTO, BASSO, DESTRA, SINISTRA};

enum Cella {NIENTE, SERPENTE, MELA, ARANCIA};

/**
    Rappresenta il singolo elemento di un serpente
*/
struct Elemento
{
    int dim;/// Dimensione del segmento
    string image;///Immagine con cui viene rappresentato
    int x;
    int y;
};

/**
    Rappresenta tutto il corpo di un serpente
*/

struct Snake
{
    Direzione direzione;
    Elemento corpo[1000];
    int lunghezza;
    int bonus;
};

struct Campo
{
    Cella celle[MAX_X][MAX_Y];
};

void init_snake(Snake &s, int x, int y,
                string image, int lun, Direzione dir, Campo &c)
{
    s.lunghezza = lun;
    s.direzione = dir;
    for (int i = 0; i < s.lunghezza; i++)
    {
        s.corpo[i].x = x;
        s.corpo[i].y = y + i;
        s.corpo[i].image = image;
        s.corpo[i].dim = DIM;
        s.bonus = 0;
        c.celle[x][y + i] = SERPENTE;
    }
}

void init_elemento(Elemento &e, int x, int y,
                   string imm, Cella c, Campo &campo)
{
    e.dim = DIM;
    e.x = x;
    e.y = y;
    e.image = imm;
    campo.celle[x][y] = c;
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

void aggiorna_snake(Snake &s, Campo &c)
{
    //Questa parte aggiorna sulla griglia la "coda"
    //del serpente in modo da farla sparire
    int xf = s.corpo[s.lunghezza-1].x;
    int yf =s.corpo[s.lunghezza-1].y;
    c.celle[xf][yf] = NIENTE;
    //Questa parte aggiorna la posizione del serpente
    //in base alla sua direzione
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
    //Questa parte segna sulla griglia dove si
    //è "spostata" la testa del serpente
    int xi = s.corpo[0].x;
    int yi =s.corpo[0].y;
    c.celle[xi][yi] = SERPENTE;
}


/**
    Verifica se la testa del serpente s è andata
    a colliderecon qualcosa e ritorna la cosa con
    cui ha colliso (NIENTE, SERPENTE, ...)
*/
Cella controlla_collisione(Snake s, Campo c)
{
    int x, y;
    x = s.corpo[0].x;
    y = s.corpo[0].y;
    if(s.direzione == ALTO)
        y = s.corpo[0].y - 1;
    else if(s.direzione == BASSO)
        y = s.corpo[0].y + 1;
    else if(s.direzione == DESTRA)
        x = s.corpo[0].x + 1;
    else
        x = s.corpo[0].x - 1;
    return c.celle[x][y];
}

int main(int argc, char* argv[])
{

    Snake snake;
    Campo c;
    Elemento mela;
    for (int i = 0; i < MAX_X; i++)
        for (int j = 0; j < MAX_Y; j++)
            c.celle[i][j] = NIENTE;
    //init the library
    init();

    set_window(640, 640,"Snake");
    set_background_color(Color(0,0,0,255));

    init_snake(snake,10,10,"assets/images/snake.png",20,DESTRA,c);
    init_elemento(mela, 5, 20, "assets/images/apple.png",MELA,c);
    //main loop
    int aggiornamento = ms_time();
    while(!done())
    {
        disegna_snake(snake);
        disegna_elemento(mela);
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
            Cella cella = controlla_collisione(snake, c);
            if (cella == SERPENTE)
                break;
            if (cella == MELA)
            {
                c.celle[mela.x][mela.y] = NIENTE;
                mela.x = rand()%MAX_X;
                mela.y = rand()%MAX_Y;
                c.celle[mela.x][mela.y] = MELA;
                snake.bonus = 5;
            }
            aggiorna_snake(snake, c);
            aggiornamento = ms_time();
        }
        update();

    }

    //close the library and clean up everything
    close();
    return 0;
}
