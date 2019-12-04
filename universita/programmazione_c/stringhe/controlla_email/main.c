#include <stdio.h>
#include <stdlib.h>

int numero_chiocciole(char s[])
{
    int i, conta = 0;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == '@')
            conta++;
    return conta;
}

int prima_parte_valida(char s[])
{
    if ((s[0] >= 'a' && s[0] <= 'z') ||
        (s[0] >= 'A' && s[0] <= 'Z'))
            return 1;
    return 0;
}

int posizione(char s[], char c)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == c)
            return i;
    return -1;
}

int quanti_caratteri(char s[], char c)
{
    int i, conta = 0;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == c)
            conta++;
    return conta;
}

int email_valida(char s[])
{
    if (numero_chiocciole(s) != 1)
        return 0;
    if (!prima_parte_valida(s))
        return 0;
    int p = posizione(s, '@');
    if (quanti_caratteri(s + p,'.') != 1)
        return 0;
}

int main()
{

    return 0;
}
