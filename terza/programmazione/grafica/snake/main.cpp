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

struct Snake{
    Direzione direzione;
    Elemento corpo[100];
    int lunghezza;
};
int main(int argc, char* argv[]) {

    Snake snake;
    if (snake.direzione == SINISTRA)
        blablabla
    //init the library
    init();

    set_window(WIDTH, HEIGHT,"Snake");
    set_background_color(Color(0,0,0,255));

    //main loop
    while(!done())
    {
        update();
    }

    //close the library and clean up everything
    close();
    return 0;
}
