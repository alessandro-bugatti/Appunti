#include <stdio.h>
#include <stdlib.h>

char to_upper(char c)
{
    return c - 'a' + 'A';
}

void converti_camel_case(char s[])
{
    int i, j = 1;
    s[0] = to_upper(s[0]);
    for (i = 1; s[i] != '\0' ; i++)
    {
        if (s[i] == '_')
        {
            s[j] = to_upper(s[i+1]);
            i++;
        }
        else
        {
            s[j] = s[i];
        }
        j++;
    }
    s[j] = '\0';

}

int main()
{
    char s[] = "nome_di_variabile";
    converti_camel_case(s);
    printf("%s\n", s);
    return 0;
}
