#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fattoriale = 1; float eulero = 1;
    int N, i;
    printf("Inserisci il numero di termini della sommatoria: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        fattoriale = fattoriale * i;
        eulero = eulero + 1.0/fattoriale;
    }
    printf("L'approssimazione della e di Eulero vale: %f",
           eulero);
    return 0;
}
