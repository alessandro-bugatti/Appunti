#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define G 9.81
#define DELTA_T 0.01

int main()
{
    float v0, alpha, x, y, vx, vy, tempo;
    x = 0;
    y = 0;
    tempo = 0;
    printf("Inserisci la velocità iniziale: ");
    scanf("%f", &v0);
    printf("Inserisci l'angolo in radianti: ");
    scanf ("%f", &alpha);
    vx = v0 * cos(alpha);
    vy = v0 * sin(alpha);
    do{
        printf("tempo = %.2f x = %.3f, y = %.3f\n",tempo, x, y);
        tempo = tempo + DELTA_T;
        x = vx * tempo;
        y = vy*tempo - 0.5*G*tempo*tempo;
    }while(y>0);
    return 0;
}
