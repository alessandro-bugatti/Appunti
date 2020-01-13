#include <iostream>
#include "../../vsgl2.h"

using namespace std;
using namespace vsgl2;
using namespace vsgl2::general;
using namespace vsgl2::video;
using namespace vsgl2::utils;

const int NUM_NEMICI = 5;
const int WIDTH = 800;
const int POSIZIONE_Y_NEMICI = 30;

bool stato_nemici[NUM_NEMICI];
int posizione_proiettili[NUM_NEMICI];

void disegna_nemico(int n)
{
    int dx = WIDTH / NUM_NEMICI;
    int x = n*dx;
    int y = POSIZIONE_Y_NEMICI;
    int w = (WIDTH / NUM_NEMICI) - 10;
    int h = 10;
    draw_rect(x-1,y-1,w+2,h+2,Color(0,255,0,255));
    draw_filled_rect(x,y,w,h,Color(255,0,0,255));
}

void disegna_proiettile(int n)
{
    int dx = WIDTH / NUM_NEMICI;
    int w = (WIDTH / NUM_NEMICI) - 10;
    int x = w/2 + n*dx;
    int y = posizione_proiettili[n];
    draw_filled_rect(x,y,5,5,Color(100,0,100,255));
}


int main(int argc, char* argv[]) {
    //init the library
    init();
    //create the window and show it
    set_window(WIDTH,512,"Simple game");
    for (int i = 0 ; i < NUM_NEMICI; i++)
        stato_nemici[i] = true;

    for (int i = 0 ; i < NUM_NEMICI; i++)
        posizione_proiettili[i] = rand()%100+40;
    stato_nemici[2] = false;


    while(!done()){
             for (int i = 0 ; i < NUM_NEMICI; i++)
        if (stato_nemici[i] == true)
            disegna_nemico(i);
        for (int i = 0 ; i < NUM_NEMICI; i++){
            disegna_proiettile(i);
            posizione_proiettili[i]++;
        }
        //Update the screen
        delay(50);
        update();
    }
    //close the library and clean up everything
    close();
    return 0;
}
