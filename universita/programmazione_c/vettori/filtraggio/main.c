#include <stdio.h>
#include <stdlib.h>

#define DIM 100

int main()
{
    int v[DIM], filtrato[DIM], i, j;
    int k = 3;
    for (i = 0; i < DIM; i++)
        v[i] = 100 + rand()%30;
    for (i = 0; i < DIM; i++)
    {
        int somma = 0;
        int n = 0;

        for (j = i - k; j < i + k + 1; j++)
            if (j >= 0 && j < DIM)
            {
                somma += v[j];
                n++;
            }
        filtrato[i] = somma / n;
    }
    for (i = 0; i < DIM; i++)
        printf("%5d%5d \n", v[i], filtrato[i]);
    return 0;
}
