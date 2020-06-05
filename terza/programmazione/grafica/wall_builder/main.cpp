#include <iostream>
#include <fstream>
#include <cstdio>
#include <ctime>
#include "../../vsgl2.h"

using namespace std;
using namespace vsgl2;
using namespace vsgl2::general;
using namespace vsgl2::io;
using namespace vsgl2::video;
using namespace vsgl2::utils;
using namespace vsgl2::ttf_fonts;

const int DIM = 8;
const int WIDTH = 512;
const int HEIGHT = 512;
const int MAX_X = WIDTH/DIM;
const int MAX_Y = HEIGHT/DIM;

struct Grid{
    int m[MAX_X][MAX_Y];
};

void init_grid(Grid &g)
{
    for (int i = 0; i < MAX_X; i++)
        for (int j = 0; j < MAX_Y; j++)
            g.m[i][j] = 0;
}

void draw_grid()
{
    for (int i = 0; i < MAX_X; i++)
        for (int j = 0; j < MAX_Y; j++)
    {
        draw_line(0, i*DIM, WIDTH, i*DIM, Color(0,0, 0, 255));
        draw_line(j*DIM, 0, j * DIM, HEIGHT, Color(0,0, 0, 255));
    }
}

void draw_walls(Grid &g)
{
    for (int i = 0; i < MAX_X; i++)
        for (int j = 0; j < MAX_Y; j++)
            if (g.m[i][j] == 1)
                draw_filled_rect(j*DIM, i*DIM, DIM, DIM, Color(0,0, 0, 255));
}

int main(int argc, char* argv[]) {
    Grid grid;
    ofstream out("walls.txt");
    if (!out)
    {
        cout << "Could not open output file!" << endl;
        return 0;
    }
    //init the library
    init();
    //create the window and show it
    set_window(WIDTH, HEIGHT, "Vsgl2 Wall Builder");
    srand(time(NULL));
    set_background_color(Color(255,255,0,255));
    init_grid(grid);
    while(!done())
    {
        draw_grid();
        draw_walls(grid);
        if (mouse_left_button_pressed())
        {
            grid.m[get_mouse_y()/DIM][get_mouse_x()/DIM] = 1;
        }
        if (mouse_right_button_pressed())
        {
            grid.m[get_mouse_y()/DIM][get_mouse_x()/DIM] = 0;
        }
        update();
    }
    for (int i = 0; i < MAX_X; i++)
    {
        for (int j = 0; j < MAX_Y; j++)
            out << grid.m[i][j] << " ";
        out << endl;
    }
    out.close();
    close();
    return 0;
}
