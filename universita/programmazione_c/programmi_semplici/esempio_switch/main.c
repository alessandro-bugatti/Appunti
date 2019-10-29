#include <stdio.h>
#include <stdlib.h>


int main()
{
    int mese, giorni;
    printf("Inserisci il numero del mese: ");
    scanf("%d", &mese);
    switch(mese)
    {
        case 2:
            giorni = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            giorni = 30;
            break;
        default:
            giorni = 31;

    }
    printf("Versione switch - Il mese %d ha %d giorni\n", mese, giorni);
    //Versione equivalente con l'if-else
    giorni = 0;
    if (mese == 2)
        giorni = 28;
    else if (mese == 4 || mese == 9 ||
             mese == 6 || mese == 11)
        giorni = 30;
    else
        giorni = 31;
    printf("Versione if-else - Il mese %d ha %d giorni\n", mese, giorni);
    return 0;
}
