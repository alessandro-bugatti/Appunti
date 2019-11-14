#include <stdio.h>
#include <stdlib.h>


#define DIM 10001

int main()
{
    int v[DIM], N, i, j;
    printf("Fino a che numero vuoi arrivare (<=10000)? ");
    scanf("%d", &N);
    for(i = 0; i <= N; i++)
        v[i] = 1;
    for (i = 2; i < N/2; i++)
        if (v[i] == 1)
            //Primo modo
            //for (j = 2*i; j <= N; j += i)
            //    v[j] = 0;
            //Secondo modo
            for (j = 2; j*i <= N  ;j++)
                v[i*j] = 0;
    for (i = 2; i <= N; i++)
        if (v[i] == 1)
            printf("%d\n", i);

    return 0;
}



