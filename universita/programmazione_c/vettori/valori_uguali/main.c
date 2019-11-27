#include <stdio.h>
#include <stdlib.h>

#define M 30
#define N 10

//Primo modo, tutto nella funzione
void numeri_uguali(int m[][M], int v[], int l,
                   int n)
{
    int i, j;
    for (i = 0; i < l; i++)
        v[i] = 0;
    for (i = 0; i < l; i++)
        for (j = 0; j < M; j++)
            if (m[i][j] == n)
                v[i]++;
}

//Funzione di supporto per  il calcolo
//delle ripetizioni per ogni riga
int quante_volte(int v[], int l, int n)
{
    int i, conta = 0;
    for (i = 0; i < l; i++)
        if (v[i] == n)
            conta++;
    return conta;
}

//Funzione che sfrutta la precedente
void numeri_uguali2(int m[][M], int v[], int l,
                   int n)
{
    int i, j;
    for (i = 0; i < l; i++)
        v[i] = 0;
    for (i = 0; i < l; i++)
        v[i] = quante_volte(m[i], M, n);
}

int main()
{
    //Da fare
    return 0;
}
