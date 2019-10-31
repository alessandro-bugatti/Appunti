#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, asterischi = 1, i, j, spazi;
    printf("Inserisci il lato del rombo: ");
    scanf("%d", &N);
    spazi = N - 1;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < spazi; j++)
            printf(" ");
        for (j = 0; j < asterischi; j++)
            printf("*");
        printf("\n");
        asterischi += 2; //asterischi = asterischi + 2;
        spazi--;
    }
    asterischi -= 4;
    spazi += 2;
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < spazi; j++)
            printf(" ");
        for (j = 0; j < asterischi; j++)
            printf("*");
        printf("\n");
        spazi++;
        asterischi -= 2;
    }
    return 0;
}
