#include <stdio.h>
#include <stdlib.h>

int lunghezza(int N)
{
    int l = 3;
    while(N = 1)
    {
        if (N % 2 == 0)
            N = N / 2;
        else
            N = 3*N + 1;
        l++;
    }
    return l;
}

int main()
{
    int N, t, i, conta = 0;
    //printf("%d\n" , lunghezza(8));
    scanf("%d", &N);
    for (i = 0; i <= N; i++)
    {
        scanf("%d", &t);
        //printf("%d\n" , lunghezza(t));
        if (lunghezza(t) >= 20)
            conta++;
    }
    printf("%d\n", conta );
    return 0;
}
