#include <stdio.h>
#include <stdlib.h>

void rle(char s[], char d[])
{
    int i, conta = 0, k = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == s[i+1] && conta < 8)
        {
            conta++;
        }
        else
        {
            if (conta == 0)
            {
                d[k] = s[i];
                k++;
            }
            else
            {
                d[k] = (conta+1) + '0';
                d[k+1] = s[i];
                k += 2;
            }
            conta = 0;
        }
    }
    d[k] = '\0';
}



int main()
{
    char s[] = "ddduitttttttttttttttth";
    char d[100];
    rle(s,d);
    printf("%s\n", d);
    return 0;
}
