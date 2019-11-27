#include <stdio.h>
#include <stdlib.h>

#define N 10
#define M 15
#define K 3

void convoluzione(int A[][M], int R[][M],
                  int B[][K], int n)
{
    int i, j, r, s;
    //Azzero la matrice risultato per
    //essere sicuro che i pixel di bordo
    //siano a zero
    for (i = 0; i < n; i++)
        for (j = 0; j < M; j++)
            R[i][j] = 0;
    for (i = 1; i < n-1; i++)
        for (j = 1; j < M-1; j++)
        {
            int temp = 0;
            for (r = -1; r < 2; r++)
                for (s = -1; s < 2; s++)
                {
                    temp += A[i + r][j + s]*B[r+1][s+1];
                }
            R[i][j] = temp;
        }
}

int main()
{
    int A[N][M], R[N][M], B[K][K];
    int i, j;
    for (i = 0; i< N; i++)
        for (j = 0; i < M; i++)
            A[i][j] = rand()%100;
    //Inizializzo la matrice R
    for (i = 0; i< K; i++)
        for (j = 0; i < K; i++)
            B[i][j] = rand()%3 - 1;
    convoluzione(A, R, B, N);
    return 0;
}
