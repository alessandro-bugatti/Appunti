#include <stdio.h>
#include <stdlib.h>

#define DIM 100
/*
int main()
{
    int v[DIM];
    int i;
    printf("Inserisci 100 numeri positivi\n");
    for (i = 0; i < DIM; i++)
    {
        printf("Inserisci un numero: ");
        v[i] = rand();
        //scanf("%d",&v[i]);
    }
    for (i = 0; i < DIM; i++ )
        if (v[i] % 2 == 0)
            printf("%d\n", v[i]);
    for (i = 0; i < DIM; i++)
        if (v[i] % 2 == 1)
            printf("%d\n", v[i]);
    return 0;
}
*/

int main()
{
    int v[DIM];
    int pari[DIM], dispari[DIM];
    int i, i_p = 0, i_d = 0;
    printf("Inserisci 100 numeri positivi\n");
    for (i = 0; i < DIM; i++)
    {
        printf("Inserisci un numero: ");
        v[i] = rand();
        //scanf("%d",&v[i]);
    }
    //Versione del programma in cui al posto
    //di stampare i numeri li si inserisce
    //in due vettori distinti
    for (i = 0; i < DIM; i++ )
        if (v[i] % 2 == 0){
                //printf("%d\n", v[i]);
                pari[i_p] = v[i];
                i_p++;
            }
    for (i = 0; i < DIM; i++)
        if (v[i] % 2 == 1){
                //printf("%d\n", v[i]);
                dispari[i_d] = v[i];
                i_d++;
            }
    return 0;
}







