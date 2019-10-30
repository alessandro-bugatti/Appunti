#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10, k = 4, f_n = 1, f_k = 1, f_n_k = 1, i;
    int binomiale;
    printf("Inserisci i valori di N e K: ");
    scanf("%d", &n);
    scanf("%d", &k);
    //Primo modo non efficiente
    /*
    for (i = 1; i <= n; i++)
        f_n = f_n * i;
    for (i = 1; i <= k; i++)
        f_k = f_k * i;
    for (i = 1; i <= n - k; i++)
        f_n_k = f_n_k * i;
    */
    //Secondo modo
    for (i = 1; i <= n; i++)
    {
        f_n = f_n * i;
        if (i == k)
            f_k = f_n;
        if (i == n - k)
            f_n_k = f_n;
    }

    binomiale = f_n/(f_k*f_n_k);
    printf("Il binomiale di %d su %d vale %d",
           n, k, binomiale);
    return 0;
}
