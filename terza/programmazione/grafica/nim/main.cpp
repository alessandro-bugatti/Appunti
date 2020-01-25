#include <iostream>
#include <cstdio>
#include "../../vsgl2.h"

using namespace std;
using namespace vsgl2;
using namespace vsgl2::general;
using namespace vsgl2::io;
using namespace vsgl2::video;
using namespace vsgl2::utils;
using namespace vsgl2::ttf_fonts;

void inizializza_gioco(int v[], int n)
{
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        v[i] = j;
        j = j + 2;
    }
}
void disegna_riga(int pos, int n)
{
    for (int i = 0; i < n; i++)
        draw_filled_rect(10 + i*30, 10 + pos*100,10,60,Color(255,0,0,255));
}

void disegna_gioco(int v[], int n)
{
    for (int i = 0; i < n; i++)
        disegna_riga(i, v[i]);
}

int main(int argc, char* argv[]) {
    const int N = 4;
    int nim[N];
    inizializza_gioco(nim, N);
    char coordinates[20];
    //init the library
    init();
    //create the window and show it
    set_window(512,512,"Vsgl2 mouse movements");
    int x = get_mouse_x();
    int y = get_mouse_y();
    while(!done())
    {
        sprintf(coordinates,"(%3d, %3d)",x ,y );
        draw_text("audiowide.ttf",20,coordinates,
                  x  - text_width("audiowide.ttf", 20 ,coordinates),
                  y - text_height("audiowide.ttf", 20, coordinates),
                  Color(0,0,0,255));
        x = get_mouse_x();
        y = get_mouse_y();
        disegna_gioco(nim, N);
        update();
        delay(2);
    }
    close();
    return 0;
}
