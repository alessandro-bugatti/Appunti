#include <stdio.h>
#include <stdlib.h>

#define N_SENSORI 20
#define N_ORE 24
#define SOGLIA 50

void calcola(int m[][N_SENSORI],
             int v[], int N)
{
    int i, j;
    int media;
    for (i = 0; i < N_SENSORI; i++)
        {
            media = 0;
            int conta = 0;
            for (j = 0; j < N; j++)
                if (m[j][i] != -1){
                    media += m[j][i];
                    conta++;
                }
            if (conta == 0)
                v[i] = -1;
            else
                v[i] = media/conta;
        }
}

int inferiori(int v[], int n, int soglia)
{
    int conta = 0, i;
    for (i = 0; i < n; i++)
        if (v[i] < soglia)
            conta++;
    return conta;
}

int main()
{
    int m[N_ORE][N_SENSORI];
    int v[N_ORE], i, j;
    for (i = 0; i < N_ORE; i++)
        for (j = 0; j < N_SENSORI; j++)
            m[i][j] = rand()%202 - 1;
    calcola(m, v, N_ORE);
    printf("Il numero di sensori la cui media giornaliera è inferiore al valore di soglia è: %d",
           inferiori(v,N_ORE,SOGLIA));
    return 0;
}
