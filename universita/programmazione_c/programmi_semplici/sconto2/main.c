#include <stdio.h>
#include <stdlib.h>

//#define QTA_SCONTO_GROSSO 100
#define SCONTO_GROSSO 0.7
#define QTA_SCONTO_MEDIO 10
#define SCONTO_MEDIO 0.8

int main()
{
    int quantita;
    int QTA_SCONTO_GROSSO = 50;
    float prezzo_unitario, costo;
    printf("Inserisci il prezzo del prodotto: ");
    scanf("%f", &prezzo_unitario);
    printf("Inserisci la quantità: ");
    scanf("%d", &quantita);

    if (quantita > QTA_SCONTO_GROSSO)
    {
        costo = quantita * prezzo_unitario * SCONTO_GROSSO;
    }
    else if (quantita > QTA_SCONTO_MEDIO)
    {
        costo = quantita * prezzo_unitario * SCONTO_MEDIO;
    }
    else
    {
        costo = quantita * prezzo_unitario;
    }
    /*
    Stessa versione con una serie di if,
    bisogna però stare attenti alle condizioni
    nei vari if, per fare in modo che ogni
    condizione escluda correttamente le altre.
    if (quantita > QTA_SCONTO_GROSSO)
    {
        costo = quantita * prezzo_unitario * SCONTO_GROSSO;
    }
    if (quantita > QTA_SCONTO_MEDIO && quantita <= QTA_SCONTO_GROSSO)
    {
        costo = quantita * prezzo_unitario * SCONTO_MEDIO;
    }
    if (quantita < QTA_SCONTO_MEDIO)
    {
        costo = quantita * prezzo_unitario;
    }*/
    printf("Il costo che dovrai pagare è di %.2f euro\n",costo);
    return 0;
}
