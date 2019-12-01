#include <stdio.h>
#include <stdlib.h>

#define N_ELEMENTI 100

int main()
{
    int v[N_ELEMENTI];
    int i, j, massimo_div = 0, valore_trovato;
    for (i = 0; i < N_ELEMENTI; i++)
    {
        printf("Inserisci un elemento: ");
        scanf("%d", &v[i]);
    }
    for (i = 0; i < N_ELEMENTI; i++)
    {
        int conta = 0;
        for (j = 0; j < N_ELEMENTI; j++)
            if (v[i] % v[j] == 0)
        {
            conta++;
        }
        if (conta > massimo_div)
        {
            massimo_div = conta;
            valore_trovato = v[i];
        }
    }
    printf("Il numero con il maggior numero di divisori è il %d",
           valore_trovato);
    return 0;
}
