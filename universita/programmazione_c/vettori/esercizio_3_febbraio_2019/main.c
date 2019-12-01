#include <stdio.h>
#include <stdlib.h>

#define LARGHEZZA 640
#define ALTEZZA 480

int numero_rocce_riga(int v[], int n)
{
    int i, conta = 0, rocce = 0;
    for (i = 0; i < n-1; i++)
    {
        if (v[i] == 0)
        {
            conta = 0;
        }
        else
            conta++;
        if (conta >= 10 && (v[i+1] == 0 ||
            i+1 == n))
            rocce++;
    }
    if (conta + 1 >= 10 && v[n-1] == 1)
        rocce++;
    return rocce;
}

int numero_rocce_totali(int foto[][LARGHEZZA],
                        int n)
{
    int conta = 0, i;
    for (i = 0; i < n; i++)
        conta += numero_rocce_riga(foto[i], LARGHEZZA);
    return conta;
}

int main()
{

    return 0;
}
