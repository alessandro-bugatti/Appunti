#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mese, giorno, giorni, i;
    printf("Inserisci il mese: ");
    scanf("%d", &mese);
    printf("Inserisci il primo giorno della settimana: ");
    scanf("%d", &giorno);
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
    for (i = 0; i < giorno - 1; i++ )
        printf("    ");
    for (i = 0; i < giorni; i++ )
    {
        printf("%4d", i + 1);
        if ((i+1 + giorno - 1) % 7 == 0)
            printf("\n");
    }
    return 0;
}
