#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a, b, c;
    printf("Inserisci un numero intero: ");
    scanf("%d",&a);
    printf("Inserisci un numero intero: ");
    scanf("%d",&b);
    c = a * b;
    printf("Il prodotto di %d + %d vale %d \n", a, b, c);
    return 0;
}
