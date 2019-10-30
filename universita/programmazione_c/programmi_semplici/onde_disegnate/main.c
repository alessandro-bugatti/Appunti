#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N;
    printf("INserisci N: ");
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        printf(" _    ");
    printf("\n");
    for (i = 0; i < N; i++)
        printf("/ \\   ");
    printf("\n");
    for (i = 0; i < N; i++)
        printf("   \\_/");
    printf("\n");
    return 0;
}
