#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int n_voti;
    int voti[50];
} Libretto;

typedef struct{
    int matricola;
    char nominativo[100];
    Libretto libretto;
} Studente;

typedef struct{
    char nome[100];
    int n_studenti;
    Studente studenti[300];
} Corso;

void stampa_libretto(Libretto l)
{
    int i;
    for (i = 0; i < l.n_voti; i++)
        printf("%d \n", l.voti[i]);
}

void stampa_informazioni_studente(Studente *s)
{
    printf("Informazioni dello studente %d\n", s->matricola);
    printf("Nominativo: %s\n", s->nominativo);
    printf("Voti presi finora:\n");
    stampa_libretto(s->libretto);
    printf("Il primo voto preso da questo studente è: %d\n",
           (s->libretto).voti[0]);
}

void aggiungi_studente(Corso *c, Studente s)
{
    c->studenti[c->n_studenti] = s;
    c->n_studenti++;
}

void stampa_informazioni_corso(Corso c)
{
    printf("Corso di Laurea in %s\n-------\n", c.nome);
    printf("Numero di studenti iscritti: %d\n", c.n_studenti);
}

void stampa_informazioni_corso_completo(Corso c)
{
    stampa_informazioni_corso(c);
    int i;
    for (i = 0; i < c.n_studenti; i++)
        stampa_informazioni_studente(&c.studenti[i]);
}

void ordina_nominativo(Corso *c)
{
    int N = c->n_studenti;
    Studente *s = c->studenti;
    int i, j;
    for (i = 0; i < N; i++)
        for (j = N-1; j > i; j--)
    {
        if (strncmp(s[j].nominativo,s[j-1].nominativo, 100) < 0)
        {
            Studente temp = s[j];
            s[j] = s[j-1];
            s[j-1] = temp;
        }
    }
}

int main()
{
    Libretto mio_libretto, tuo_libretto;
    mio_libretto.n_voti = 3;
    mio_libretto.voti[0] = 24;
    mio_libretto.voti[1] = 28;
    mio_libretto.voti[2] = 30;
    tuo_libretto = mio_libretto;
    //stampa_libretto(tuo_libretto);
    mio_libretto.n_voti = 2;
    //stampa_libretto(mio_libretto);
    Studente s;
    s.matricola = 12345;
    strncpy(s.nominativo, "Verpe Astrunigi", 100);
    s.libretto = mio_libretto;
    stampa_informazioni_studente(&s);
    printf("La dimensione di una variabile di tipo studente vale: %d\n",
           sizeof(Studente));
    Corso c;
    strncpy(c.nome, "Meccanica",100);
    c.n_studenti = 0;
    aggiungi_studente(&c,s);

    s.matricola = 56789;
    strncpy(s.nominativo, "Luigina Fertuli", 100);
    s.libretto = tuo_libretto;
    aggiungi_studente(&c, s);
    s.matricola = 88888;
    strncpy(s.nominativo, "Adamo Piergini", 100);
    s.libretto = tuo_libretto;
    aggiungi_studente(&c, s);

    stampa_informazioni_corso_completo(c);
    ordina_nominativo(&c);
    stampa_informazioni_corso_completo(c);
    return 0;
}






