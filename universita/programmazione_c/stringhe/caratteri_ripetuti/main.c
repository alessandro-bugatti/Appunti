#include <stdio.h>
#include <stdlib.h>


void elimina_ripetizioni(char s[],char d[], int n)
{
    int i, j , k = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        int presente = 0;
        for (j = 0; j < i; j++)
            if (s[j] == s[i])
                presente = 1;
        if (!presente) //(presente == 0)
        {
            d[k] = s[i];
            k++;
        }
        if (k == n)
        {
            d[k] = '\0';
            return;
        }
    }
    d[k] = '\0';
}

void elimina_ripetizioni_furba(char s[], char d[], int n)
{
    int ascii[128];
    int i, k = 0;
    for (i = 0; i < 128; i++)
        ascii[i] = 0;
    for (i = 0; s[i] != '\0' && k < n; i++)
    {
        if (!ascii[s[i]])
        {
            d[k] = s[i];
            k++;
        }
        ascii[s[i]]++;
    }
    d[k] = '\0';
}

int main()
{
    char s[] = "weekwo";
    char d[50];
    elimina_ripetizioni(s,d,50);
    printf("%s\n", d);
    elimina_ripetizioni_furba(s,d,50);
    printf("%s\n", d);

    return 0;
}
