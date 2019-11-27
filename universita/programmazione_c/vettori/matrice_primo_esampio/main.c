#include <stdio.h>
#include <stdlib.h>

#define M 10

int somma_matrice(int m[][M], int n)
{
    int somma = 0;
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < M; j++)
            somma += m[i][j];
    return somma;
}

int main()
{
    int matrice[3][M], i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < M; j++)
            matrice[i][j] = rand()%10;
    printf("%d\n", somma_matrice(matrice,3));
    return 0;
}
