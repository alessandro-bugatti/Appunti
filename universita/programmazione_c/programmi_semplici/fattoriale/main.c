#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, fattoriale = 1;
    printf("Esercizio per il calcolo del fattoriale\n");
    printf("Inserisci N: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        fattoriale *= (i + 1);
    printf("N! = %d\n", fattoriale);
    return 0;
}
