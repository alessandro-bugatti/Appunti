#include <iostream>
#include <ctime>
#include "../../vsgl2.h"

using namespace std;
using namespace vsgl2;
using namespace vsgl2::general;
using namespace vsgl2::video;
using namespace vsgl2::utils;
using namespace vsgl2::ttf_fonts;

const int W = 640;
const int H = 480;
const int DIM = 200;
const int X_D1 = 40;
const int Y_D1 = 40;

const int X_D2 = 340;
const int Y_D2 = 40;


void my_update()
{

}

void draw_dice(int n, int x, int y)
{
    if (n == 1)
        draw_image("uno.png", x, y,DIM, DIM,255);
    if (n == 2)
        draw_image("due.png", x, y,DIM, DIM,255);

}

void draw(int d1, int d2)
{
    draw_dice(d1, X_D1, Y_D1);
    draw_dice(d2, X_D2, Y_D2);
}

//Da completare con la logica del gioco del
//craps vista nelle lezioni precedenti

int main(int argc, char* argv[]) {

    //init the library
    init();
    //create the window and show it
    set_window(W,H,"CRAPS");

    //main loop
    set_background_color(Color(255,0,0,255));

    while(!done())
    {
        my_update();
        draw(rand()%2 + 1,rand()%2 + 1);
        draw_text("baloo.ttf",20,"Premi un tasto per lanciare i dadi",20,400,Color(0,0,0,255));
        update();
        wait_for_button_pressed();
    }

    //close the library and clean up everything
    close();
    return 0;
}

