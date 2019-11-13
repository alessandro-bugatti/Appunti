#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d;
    int n, i, conta = 0;
    printf("Inserisci a: ");
    scanf("%f", &a);
    printf("Inserisci b: ");
    scanf("%f", &b);
    c = a*0.8;
    d = b*1.2;
    for (i = 0; i < 100; i++)
    {
        int d_intero = d * 100;
        int c_intero = c * 100;
        n = rand()%(d_intero - c_intero) + c_intero;

    }
    return 0;
}
