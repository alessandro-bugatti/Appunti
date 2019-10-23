#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantita;
    float prezzo_unitario, costo;
    printf("Inserisci il prezzo del prodotto: ");
    scanf("%f", &prezzo_unitario);
    printf("Inserisci la quantità: ");
    scanf("%d", &quantita);
    costo = quantita * prezzo_unitario;
    if (quantita > 10)
    {
        costo = costo*0.8;
    }
    printf("Il costo che dovrai pagare è di %.2f euro\n",costo);
    return 0;
}
