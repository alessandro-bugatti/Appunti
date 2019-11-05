#include <stdio.h>
#include <stdlib.h>

int is_prime(int N)
{
    int i;
    for (i = 2; i < N/2; i++)
        if (N % i == 0)
            return 0;
    return 1;
}

int main()
{
    int a = 56, b = 123;
    int i;
    int contatore = 0;
    for (i = a; i < b; i++)
    {
        if (is_prime(i) == 1)
        {
            contatore++;
            printf("%d\n", i);
        }

    }
    printf("Tra %d e %d sono compresi %d numeri primi\n",
           a, b, contatore);
    return 0;
}
