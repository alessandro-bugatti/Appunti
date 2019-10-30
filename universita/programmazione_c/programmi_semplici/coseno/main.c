#include <stdio.h>
#include <stdlib.h>

int main()
{
    float coseno = 0;
    int n, j, N = 10;
    float x;
    printf("Inserisci l'angolo di cui vuoi calcolare il coseno (in radianti): ");
    scanf("%f", &x);
    for (n = 0; n < N; n++)
    {
        int fattoriale = 1;
        float x_2n = 1;
        int segno = 1;
        //(2n)!
        for (j = 1; j <= 2*n; j++)
            fattoriale = fattoriale * j;
        //x elevato alla 2n
        for (j = 1; j <= 2*n; j++)
            x_2n = x_2n * x;
        //-1 elevato alla n
        for (j = 1; j <= n; j++)
            segno = -segno;
        coseno += segno*x_2n/fattoriale;

    }
    printf("%f\n", coseno);
    return 0;
}
