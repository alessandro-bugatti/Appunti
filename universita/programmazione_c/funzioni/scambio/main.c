#include <stdio.h>
#include <stdlib.h>

//Esempio di variabile globale
int globale = 42;

//Scambio che non funziona per il passaggio
//per copia
void scambio(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Valore della variabile globale: %d\n", globale);
}

void scambio_vero(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    //Modifica della variabile globale
    globale++;
}


//Altro esempio di utilizzo dei puntatori
void incrementa(int *a)
{
    *a = *a + 1;
}

int main()
{
    int a = 7, b = 5;
    printf("Valori iniziali, a = %d, b = %d\n", a, b);
    //Qua non avviene nulla, passaggio per valore
    scambio(a, b);
    printf("a = %d, b = %d\n", a, b);
    //Qua avviene lo scambio, passaggio per indirizzo
    scambio_vero(&a, &b);
    //Stampa l'indirizzo di a, solo per vedere che
    //in effetti è un indirizzo
    printf("Indirizzo di a: %x\n", &a);
    printf("a = %d, b = %d\n", a, b);
    //Altro esempio di modifica tramite passaggio
    //di indirizzo
    int c = 1;
    incrementa(&c);
    printf("%d\n", c);
    //Serve a verificare che la variabile globale
    //viene vista in ogni funzione
    printf("Nuovo valore della variabile globale: %d\n", globale);


    return 0;
}
