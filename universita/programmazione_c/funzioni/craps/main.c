#include <stdio.h>
#include <stdlib.h>

//Idea sbagliata, non ha la giusta distribuzione
//dei valori
int due_dadi()
{
    return rand()%11 + 2;
}

int random(int inf, int sup)
{
    return rand()%(inf - sup + 1) + inf;
}

//Simula il lancio di N dadi,
//ognuno con un numero di facce uguale al parametro facce
int lancia_dadi(int N, int facce)
{
    int i;
    int totale = 0;
    for (i = 0; i < N; i++)
        totale += random(1, facce);
    return totale;
}

int main()
{
    int lancio = lancia_dadi(2, 6);
    printf("%d\n", lancio);
    return 0;
}


