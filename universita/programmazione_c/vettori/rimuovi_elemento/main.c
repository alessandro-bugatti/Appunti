#include <stdio.h>
#include <stdlib.h>

void rimuovi_elemento(int v[], int n, int pos)
{
    if (pos < 0 || pos >= n)
        return;
    int i;
    for (i = pos; i < n-1; i++)
        v[i] = v[i+1];
}

void rimuovi_elementi(int v[], int n,
                      int quale, int *n_rimasti)
{
    int temp[100];
    int i, j = 0;
    *n_rimasti = 0;
    for (i = 0; i < n; i++)
    {
        if (v[i] != quale)
        {
            temp[j] = v[i];
            j++;
            *n_rimasti+=1;
        }
    }
    for (i = 0; i < *n_rimasti; i++)
        v[i] = temp[i];
}

void stampa(int v[], int n)
{
    int i;
    int *p;
    printf("Il vettore contiene %d elementi\n", n);
    for ( p = v; p < v + n; p++)
        printf("%d ", *p);
}

int main()
{
    int v[] ={21,34,21,56,77,6};
    //rimuovi_elemento(v, 5, 2);
    //sizeof verrà spiegato più avanti
    int n = sizeof(v)/sizeof(int);
    stampa(v, n);
    printf("\n");
    rimuovi_elementi(v, n, 21, &n);
    stampa(v, n);
    return 0;
}
