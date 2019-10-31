#include <stdio.h>
#include <stdlib.h>

#define ALTEZZA_MINIMA 0.001

int main()
{
    float H;
    int rimbalzi = 0;
    printf("INserisci l'altezza di partenza: ");
    scanf("%f", &H);
    while (H > ALTEZZA_MINIMA)
    {
        H = H*0.99;
        rimbalzi++;
    }
    printf("La pallina si ferma dopo %d rimbalzi\n",
           rimbalzi);
    return 0;
}
