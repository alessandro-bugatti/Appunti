#include <stdio.h>
#include <stdlib.h>

#define PRECISIONE 0.001

int main()
{
    float b, h, V, l_max, V_max = 0, l;
    printf("Inserisci la base in metri: ");
    scanf("%f", &b);
    printf("Inserisci l'altezza in metri: ");
    scanf("%f", &h);
    float lato_corto;
    if (b > h)
        lato_corto = h;
    else
        lato_corto = b;
    for (l = 0; l <= lato_corto/2; l = l + PRECISIONE)
    {
        V = l * (b - 2*l) * (h - 2*l);
        if (V > V_max)
        {
            V_max = V;
            l_max = l;
        }
        printf("l = %f V = %f\n",l,V);
    }
    printf("L'altezza di taglio ottimale vale %f metri\n",l_max);
    return 0;
}
