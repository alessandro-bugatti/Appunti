#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A[][3] = {
            {1,2,3},
            {4,5,6}
        };
    double B[][2] = {
            {1,2},
            {3,4},
            {5,6}
    };
    double C[2][2] = {0};
    int i, j, r;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
    {
        for (r = 0; r < 3; r++)
            C[i][j] += A[i][r] * B[r][j];
    }
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++)
            printf("%f ", C[i][j]);
        printf("\n");
    }
    return 0;
}







