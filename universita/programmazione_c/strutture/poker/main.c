#include <stdio.h>
#include <stdlib.h>

typedef enum{
    CUORI,
    FIORI,
    PICCHE,
    QUADRI
} Seme;

typedef struct{
    int valore;
    Seme seme;
}Carta;

typedef struct{
    Carta carte[5];
    int presente[5];
    int quante;
}Mano;

typedef struct{
    Carta carte[52];
    int carta_corrente;
}Mazzo;

void stampa_carta(Carta c)
{
    if (c.valore <= 10)
        printf("%d ", c.valore);
    else if (c.valore == 11)
        printf("J ");
    else if (c.valore == 12)
        printf("Q ");
    else
        printf("K ");
    if (c.seme == CUORI)
        printf("di cuori\n");
    else if (c.seme == QUADRI)
        printf("di quadri\n");
    else if (c.seme == FIORI)
        printf("di fiori\n");
    else
        printf("di picche\n");
}

//Crea un mazzo di carte francesi ordinate
void inizializza_mazzo(Mazzo *m)
{
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 13; j++){
            m->carte[i*13 + j].seme = i;
            m->carte[i*13 + j].valore = j + 1;
    }
    m->carta_corrente = 0;
}

void stampa_mazzo(Mazzo m)
{
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 13; j++)
            stampa_carta(m.carte[i*13 + j]);
}

Carta pesca_carta(Mazzo *m)
{
    int n = m->carta_corrente;
    m->carta_corrente++;
    return m->carte[n];
}

void inizializza_mano(Mano *mano,Mazzo *m)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        mano->carte[i] = pesca_carta(m);
        mano->presente[i] = 1;
    }
    mano->quante = 5;
}

void stampa_mano(Mano m)
{
    int i;
    for (i = 0; i < 5; i++)
        if (m.presente[i])
            stampa_carta(m.carte[i]);
}

void mescola_mazzo(Mazzo *m)
{
    int n_scambi = 5000, i;
    for (i = 0; i < n_scambi; i++)
    {
        int r = rand()%52;
        int s = rand()%52;
        Carta temp = m->carte[r];
        m->carte[r] = m->carte[s];
        m->carte[s] = temp;
    }
}

void scarta(Mano *mano, int p)
{
    mano->presente[p] = 0;
    mano->quante--;
}

void aggiungi_carta_pescata(Mano *mano, Carta c)
{
    if (mano->quante == 5)
        return;
    int i;
    for (i = 0; i < 5; i++)
        if (!mano->presente[i])
    {
        mano->carte[i] = c;
        mano->presente[i] = 1;
        mano->quante++;
        return;
    }
}

int main()
{
    Carta c = {11,CUORI};
    Mazzo mazzo;
    inizializza_mazzo(&mazzo);
    stampa_mazzo(mazzo);
    mescola_mazzo(&mazzo);
    stampa_mazzo(mazzo);
    c = pesca_carta(&mazzo);
    printf("Carta pescata: ");
    stampa_carta(c);
    c = pesca_carta(&mazzo);
    printf("Carta pescata: ");
    stampa_carta(c);
    Mano g1, g2;
    inizializza_mano(&g1, &mazzo);
    inizializza_mano(&g2, &mazzo);
    printf("Stampa la mano del primo giocatore: \n");
    stampa_mano(g1);
    //printf("Stampa la mano del secondo giocatore: \n");
    //stampa_mano(g2);

    scarta(&g1, 3);
    scarta(&g1, 1);
    printf("Stampa la mano del primo giocatore: \n");
    stampa_mano(g1);
    aggiungi_carta_pescata(&g1, pesca_carta(&mazzo));
    aggiungi_carta_pescata(&g1, pesca_carta(&mazzo));
    printf("Stampa la mano del primo giocatore: \n");
    stampa_mano(g1);
    return 0;
}
