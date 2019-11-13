#include <stdio.h>
#include <stdlib.h>

void scala(double *n, double s)
{
    *n= *n * s;
}

double scala2(double n, double s)
{
    return n * s;
}

int main()
{
    double n = 3.2, s = 0.5;
    scala(&n, s);
    printf("Numero scalato = %f\n", n);
    return 0;
}
