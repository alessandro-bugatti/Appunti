#include <stdio.h>
#include <stdlib.h>

#define R 4
#define C 6

int main()
{
    int A[R][C], At[C][R];
    int i, j;
    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            A[i][j] = rand()%100;
    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            At[j][i] = A[i][j];
    //Stampa matrice originale
    for (i = 0; i < R; i++){
        for (j = 0; j < C; j++)
            printf("%4d ", A[i][j]);
        printf("\n");
    }
    //Stampa matrice trasposta
    for (i = 0; i < C; i++){
        for (j = 0; j < R; j++)
            printf("%4d ", At[i][j]);
        printf("\n");
    }
    return 0;
}
