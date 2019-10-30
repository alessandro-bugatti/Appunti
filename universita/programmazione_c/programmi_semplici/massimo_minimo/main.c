#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, numero, massimo , minimo;
    printf("Inserisci N: ");
    scanf("%d", &N);
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    massimo = numero;
    minimo = numero;
    for (i = 0; i < N - 1; i++)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &numero);
        if (numero > massimo)
            massimo = numero;
        if (numero < minimo)
            minimo = numero;
    }
    printf("massimo: %d minimo: %d\n",
           massimo, minimo);
    return 0;
}
