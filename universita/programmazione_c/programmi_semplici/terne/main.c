#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
    int N;
    printf("Inserisci N: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        for (j = i; j <= N; j++)
        {
            for (k = j; k <= N; k++)
            {
                if (i*i + j*j == k*k)
                    printf("%d %d %d terna pitagorica\n", i, j, k);
            }
        }
    }
    return 0;
}
