#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M, S, K;
    //printf("Inserisci due numeri: ");
    scanf("%d", &N);
    scanf("%d", &M);
    S = N + M;
    int resto = S % 2;
    if (resto == 0)
        K = N*M;
    else
        K = N - M;
    printf("%d %d\n", S, K);
    return 0;
}
