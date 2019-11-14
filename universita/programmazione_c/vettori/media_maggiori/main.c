#include <stdio.h>
#include <stdlib.h>

#define DIM 100

int main()
{
    int N, i;
    float v[DIM], media = 0;
    printf("Quanti valori vuoi inserire (<= 100)? ");
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &v[i]);
    for (i = 0; i < N; i++)
        media += v[i];
    media = media / N;
    printf("La media vale %f\n", media);
    for (i = 0; i < N; i++)
        if (v[i] > media)
            printf("%f\n", v[i]);

    return 0;
}
