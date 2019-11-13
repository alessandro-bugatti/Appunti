#include <stdio.h>
#include <stdlib.h>

int main()
{
    float popolazione_attuale, popolazione_finale;
    int anno_inizio, anno_fine;
    float P;
    printf("Inserisci la popolazione attuale: ");
    scanf("%f", &popolazione_attuale);
    printf("Inserisci l'anno di inizio: ");
    scanf("%d", &anno_inizio);
    printf("Inserisci l'anno di fine: ");
    scanf("%d", &anno_fine);
    printf("Inserisci la percentuale di accrescimento: ");
    scanf("%f", &P);
    popolazione_finale = popolazione_attuale;
    int i;
    for (i = anno_inizio; i <= anno_fine; i++)
        popolazione_finale = popolazione_finale +
        popolazione_finale*P/100.0;
    printf("La popolazione all'anno %d era di %f persone, all'anno %d il modello prevede che sia diventata di %f",
           anno_inizio, popolazione_attuale, anno_fine, popolazione_finale);
    return 0;
}
