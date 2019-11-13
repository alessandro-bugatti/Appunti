#include <stdio.h>
#include <stdlib.h>

void floyd(int N)
{
    int i, j, conta = 1, lunghezza = 1;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < lunghezza; j++)
        {
            printf("%5d", conta);
            conta++;
        }
        printf("\n");
        lunghezza++;
    }
}

int main()
{
    floyd(10);
    return 0;
}
