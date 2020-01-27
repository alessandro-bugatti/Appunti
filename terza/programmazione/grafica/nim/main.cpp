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

const int N_ROWS = 5;
const int IMAGE_W = 20;
const int IMAGE_H = 480/N_ROWS;

void game_init(int v[], int n)
{
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        v[i] = j;
        j = j + 2;
    }
}

void draw_object(int x, int y)
{
    draw_image("match.png",x,y, IMAGE_W, IMAGE_H,255);
}

void draw_row(int pos, int n)
{
    int delta_x = get_window_width() / (N_ROWS*2 + 1);
    int delta_y = get_window_height() / N_ROWS;
    for (int i = 0; i < n; i++)
        draw_object(10 + i*delta_x, 10 + pos*delta_y);
}

void draw_game(int v[], int n)
{
    for (int i = 0; i < n; i++)
        draw_row(i, v[i]);
}

void check_input(int x, int y, int v[])
{
    int row = y/(get_window_height()/N_ROWS);
    int n = x/(get_window_width()/(N_ROWS*2 + 1)) - 1;
    if (v[row] > n)
        v[row] = n + 1;
}

int main(int argc, char* argv[]) {

    int nim[N_ROWS];
    char coordinates[20];
    //init the library
    init();
    SDL_ShowCursor(SDL_DISABLE);

    //create the window and show it
    set_window(512,512,"Vsgl2 Nim");
    int x = get_mouse_x();
    int y = get_mouse_y();
    game_init(nim, N_ROWS);
    while(!done())
    {
        x = get_mouse_x();
        y = get_mouse_y();
        draw_game(nim, N_ROWS);
        draw_image("hand.png", x-25, y-25, 50, 50, 100);
        if (mouse_left_button_pressed())
            check_input(x,y,nim);
        update();
        delay(2);
    }
    close();
    return 0;
}
