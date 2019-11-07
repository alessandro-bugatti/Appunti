#include <stdio.h>
#include <stdlib.h>

int digits(int N)
{
    int contatore = 0;
    while (N > 0)
    {
        N = N / 10;
        contatore++;
    }
    return contatore;
}

int k_digit(int N, int k)
{
    if (k <= 0 || k > digits(N))
        return -1;
    int cifra;
    int i;
    for (i = 0; i < k; i++){
        cifra = N % 10;
        N = N / 10;
    }
    return cifra;
}

int main()
{
    int N = 1234, k = 3;
    printf("Il numero di cifre di %d vale %d\n",
           N , digits(N));
    printf("La %d cifra di %d vale %d \n",
        k, N, k_digit(N,k));
    return 0;
}
