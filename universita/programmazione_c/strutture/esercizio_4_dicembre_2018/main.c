#include <stdio.h>
#include <stdlib.h>

typedef enum{
    GIALLO,
    BIANCO,
    BLU
} Colore;

typedef struct{
    float potenza;
    int percentuale;
    Colore colore;
} Lampada;

float potenza_consumata(Lampada *l)
{
    return l->potenza * l->percentuale/100;
}

int controlla_soglia(Lampada l[], int n_lampade, float w, Colore colore)
{
    int i;
    float potenza = 0;
    for (i = 0; i < n_lampade; i++)
        if (l[i].colore == colore)
            potenza += potenza_consumata(&l[i]);
    if (potenza <= w)
        return 1;
    return -1;
}

int main()
{
    Lampada lampade[100];
    return 0;
}
