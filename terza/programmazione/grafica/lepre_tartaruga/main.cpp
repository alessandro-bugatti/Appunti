#include <iostream>
#include <ctime>
#include "../../vsgl2.h"

using namespace std;
using namespace vsgl2;
using namespace vsgl2::general;
using namespace vsgl2::video;
using namespace vsgl2::utils;

const int W = 874;
const int H = 305;
const int Y_TARTARUGA = 50;
const int Y_LEPRE = 150;
const int DIM = 100;


//Le regole di movimento sono tratte dal
//manuale dei giochi per storie greche
void muovi_tartaruga(int &tartaruga)
{
    int tiro = rand()%10 + 1;
    if (tiro <= 5)
        tartaruga += 3;
    else if (tiro <= 7)
        tartaruga -= 6;
    else
        tartaruga += 1;
    if (tartaruga < 0)
        tartaruga = 0;
}

void muovi_lepre(int &lepre)
{
    int tiro = rand()%10 + 1;
    if (tiro <= 2)
        lepre += 0;
    else if (tiro <= 4)
        lepre += 9;
    else if (tiro <= 5)
        lepre -= 12;
    else if (tiro <= 8)
        lepre += 1;
    else
        lepre -= 2;
    if (lepre < 0)
        lepre = 0;
}

//Aggiorna la posizione della lepre e della
//tartaruga
void my_update(int &tartaruga, int &lepre)
{
    muovi_tartaruga(tartaruga);
    muovi_lepre(lepre);
}

void draw(int tartaruga, int lepre)
{
    draw_image("road.jpg",0,0,W,H,255);
    draw_image("tartaruga.gif",tartaruga,Y_TARTARUGA,DIM,DIM,255);
    draw_image("lepre.gif",lepre, Y_LEPRE, DIM, DIM, 255);
}

int main(int argc, char* argv[]) {

    int lepre = 0, tartaruga = 0;
    //init the library
    init();
    //create the window and show it
    set_window(W,H,"Lepre e tartaruga");

    //main loop
    set_background_color(Color(255,0,0,255));

    while(!done())
    {

        my_update(tartaruga, lepre);
        draw(tartaruga,lepre);
        update();
        delay(100);
    }

    //close the library and clean up everything
    close();
    return 0;
}

