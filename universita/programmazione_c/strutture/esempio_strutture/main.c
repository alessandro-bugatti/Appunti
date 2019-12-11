#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int n_voti;
    int voti[50];
} Libretto;


void stampa_libretto(Libretto l)
{
    int i;
    for (i = 0; i < l.n_voti; i++)
        printf("%d \n", l.voti[i]);
}


int main()
{
    Libretto mio_libretto, tuo_libretto;
    mio_libretto.n_voti = 3;
    mio_libretto.voti[0] = 24;
    mio_libretto.voti[1] = 28;
    mio_libretto.voti[2] = 30;
    tuo_libretto = mio_libretto;
    stampa_libretto(tuo_libretto);
    mio_libretto.n_voti = 2;
    stampa_libretto(mio_libretto);

    return 0;
}
