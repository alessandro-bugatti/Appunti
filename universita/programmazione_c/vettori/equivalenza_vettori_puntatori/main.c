#include <stdio.h>
#include <stdlib.h>

//Porre a zero le celle con valori minori di k
void elimina_minori_di(int v[], int n, int k)
{
    int i;
    for (i = 0; i < n; i++ )
        if (v[i] < k)
            v[i] = 0;
}

void stampa(int v[], int n)
{
    int i;
    int *p;
    for ( p = v; p < v + n; p++)
        printf("%d\n", *p);
}

#define DIM 10

int main()
{
    int vettore[DIM], i, k = 5;
    int *p;
    p = vettore;
    //vettore++; //NO
    //p++; //SI
    for (i = 0; i < DIM; i++)
        //vettore[i] = rand()%10 + 1;
        //oppure
        *(p + i) = rand()%10 + 1;
        //oppure
        //*(vettore + i) = rand()%10 + 1;
    stampa(vettore, DIM);
    //&vettore[0] equivale a vettore
    elimina_minori_di(vettore, DIM, k);
    stampa(vettore, DIM);
    return  0;
}
