#include <stdio.h>


#define EPSILON 0.0000001

int main()
{
    double n, a, b, m;
    printf("Calcolo della radice quadrata con il metodo di bisezione\n");
    //Primo modo per controllare gli errori
    //di inserimento
    do{
        printf("Inserisci il numero di cui vuoi sapere la radice: ");
        scanf("%lf", &n);
    }while (n < 0);
    //Secondo modo, nel quale il while permette
    //di avere dei messaggi all'utente migliori
    /*printf("Inserisci il numero di cui vuoi sapere la radice: ");
    scanf("%lf", &n);
    while (n < 0){
        printf("Attenzione! Inserisci un numero positivo: ");
        scanf("%lf", &n);
    }
    */
    a = 0;
    b = n;
    while (b - a > EPSILON)
    {
        m = (a + b)/2;
        if (m * m < n)
            a = m;
        else //if (m * m > n)
            b = m;
    }
    printf("Il valore della radice quadrata vale: %.10f\n",
           m);
    return 0;
}

