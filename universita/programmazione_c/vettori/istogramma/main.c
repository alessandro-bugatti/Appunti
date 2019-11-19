#include <stdio.h>
#include <stdlib.h>

void disegna_istogramma(int v[], int n, int max)
{
    int massimo = v[0], i, j;
    for (i = 0; i < n; i++)
        if (v[i] > massimo)
            massimo = v[i];
    for (i = 0; i < n; i++)
    {
        int dim = (float)v[i]/massimo*max;
        for (j = 0; j < dim; j++)
            printf("*");
        printf("\n");
    }
}

#define DIM 11

int main()
{
    int v[DIM], i;
    for (i = 0; i < DIM; i++)
        v[i] = 0;
    //Disegna la distribuzione di frequenze del
    // lancio di due dadi a 6 facce
    for (i = 0; i < 100000; i++)
        v[rand()%6+rand()%6]++;
    disegna_istogramma(v, DIM, 30);
    return 0;
}
