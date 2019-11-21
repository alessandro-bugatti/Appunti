#include <stdio.h>
#include <stdlib.h>

double prodotto_scalare(double v1[],
                        double v2[], int n)
{
    double somma = 0;
    int i;
    for (i = 0; i < n; i++)
        somma += v1[i] * v2[i];
    return somma;
}

int main()
{
    double v1[] = {1,2,3}, v2[] = {4,5,6};
    double prodotto = prodotto_scalare(v1,v2,3);
    printf("%f\n", prodotto);
    return 0;
}
