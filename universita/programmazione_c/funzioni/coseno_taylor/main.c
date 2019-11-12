#include <stdio.h>
#include <stdlib.h>

int fattoriale(int N)
{
    int f = 1;
    int i;
    for (i = 1; i <= N; i++)
        f *= i;
    return f;
}

double potenza(double b, int e)
{
    double p = 1;
    int i;
    for (i = 0; i < e; i++)
        p *= b;
    return p;
}

int main()
{
    double x = 0.98;
    double coseno = 0, seno = 0;
    int n;
    for (n = 0; n < 5; n++)
        coseno = coseno +
        potenza(-1, n) * potenza(x, 2*n)/
        fattoriale(2*n);
    for (n = 0; n < 5; n++)
        seno = seno +
        potenza(-1, n) * potenza(x, 2*n + 1)/
        fattoriale(2*n + 1);
    printf("%f\n", coseno);
    printf("%f\n", seno);
    return 0;
}


