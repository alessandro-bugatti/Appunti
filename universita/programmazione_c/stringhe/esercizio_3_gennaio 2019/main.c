#include <stdio.h>
#include <stdlib.h>

void conta_caratteri(char s[])
{
    int conta = 0;
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && conta > 0)
        {
            printf("%d ", conta);
            conta = 0;
        }
        else if (s[i] != ' ')
            conta++;
    }
    if (conta > 0)
        printf("%d \n", conta);
}

int main()
{
    char s[] = "     che   esercizio semplice   ";
    conta_caratteri(s);
    return 0;
}
