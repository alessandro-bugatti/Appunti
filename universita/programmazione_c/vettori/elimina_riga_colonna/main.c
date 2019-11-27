#include <stdio.h>
#include <stdlib.h>

#define M 3

int main()
{
    int m[][3] = {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
                };
    int R, C;
    printf("Inserisci un indice di riga: ");
    scanf("%d", &R);
    printf("Inserisci un indice di colonna: ");
    scanf("%d", &C);
    int i, j;
    for (i = R; i < M - 1; i++)
        for (j = 0; j < M; j++)
            m[i][j] = m[i+1][j];
    for (j = C; j < M - 1; j++)
        for (i = 0; i < M; i++)
            m[i][j] = m[i][j+1];
    //Stampa
    for (i = 0; i < M - 1; i++){
        for (j = 0; j < M -1 ; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}
