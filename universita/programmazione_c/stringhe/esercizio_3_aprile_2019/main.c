#include <stdio.h>
#include <stdlib.h>


int compatibile(char s[], char m[])
{
    int i;
    for (i = 0; m[i] != '\0'; i++)
        if (s[i] != m[i] && m[i] != '*')
            return 0;
    return 1;
}

int trova_occorrenze(char s[], char m[])
{
    int i, conta = 0;
    int ls = strlen(s);
    int lm = strlen(m);
    for (i = 0; i < ls - lm + 1; i++)
        conta += compatibile(s + i , m);
    return conta;
}

int main()
{
    char s[] = "quella cosa con la coda";
    printf("%d \n", trova_occorrenze(s,"co*a"));
    return 0;
}
