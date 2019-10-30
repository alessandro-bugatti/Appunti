#include <stdio.h>
#include <stdlib.h>

#define ALTEZZA_MINIMA 0.001

int main()
{
    float altezza, km = 0;
    printf("Inserisci l'altezza dell'onda: ");
    scanf("%f", &altezza);
    while(altezza > ALTEZZA_MINIMA)
    {
        altezza = altezza * 0.9;
        km++;
    }
    printf("L'onda sparisce dopo %f kilometri\n", km);


    return 0;
}
