#include <stdio.h>
#include <stdlib.h>

void stampa(int v[], int n)
{
    int i;
    int *p;
    for ( p = v; p < v + n; p++)
        printf("%d ", *p);
    printf("\n");
}

void inverti(int v[], int n)
{
    int i;
    for (i = 0; i < n/2; i++)
    {
        int temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }
}

#define DIM 10

int main()
{
    int v[DIM], i;
    for (i = 0; i < DIM; i++)
        v[i] = rand()%301 + 200;
    stampa(v, DIM);
    inverti(v, DIM);
    stampa(v, DIM);
    return 0;
}








