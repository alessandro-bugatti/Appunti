#include <stdio.h>
#include <stdlib.h>



int main()
{
    int pari_max = 0, dispari_max = 1, n, i;
    for (i = 0 ; i < 100; i++)
    {
        n = rand()%10000 + 1;
        if (n % 2 == 0 && n > pari_max)
            pari_max = n;
        if (n %2 == 1 && n > dispari_max)
            dispari_max = n;
    }
    printf("Il più grande dei pari vale: %d\n", pari_max);
    printf("Il più grande dei dispari vale: %d\n", dispari_max);
    printf("Il valore assoluto della differenza vale: ");
    if (pari_max > dispari_max)
        printf("%d\n", pari_max - dispari_max);
    else
        printf("%d\n", dispari_max - pari_max);
    return 0;
}
