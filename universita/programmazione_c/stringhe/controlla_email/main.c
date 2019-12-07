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

int solo_alfabetici(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        if (!isalpha(s[i]))
            return 0;
    return 1;
}

int email_valida(char s[])
{
    //Controllo che ci sia un unico simbolo @
    if (numero_chiocciole(s) != 1)
        return 0;
    //Controllo se la prima parte è valida
    if (!prima_parte_valida(s))
        return 0;
    //Controllo che ci sia un solo . dopo la @
    int p = posizione(s, '@');
    if (quanti_caratteri(s + p,'.') != 1)
        return 0;
    //Controllo se dopo il punto ci sono solo
    //caratteri
    int pos_punto = posizione(s + p, '.');
    printf("\n%d %d %d\n",p, p + pos_punto, solo_alfabetici(s + p + pos_punto + 1));
    if (!solo_alfabetici(s + p + pos_punto + 1))
        return 0;
    //Controllo se la parte dopo il punto
    //è lunga due o tre caratteri
    int lunghezza_stringa = strlen(s + p);
    printf("\n%d %d\n", lunghezza_stringa, pos_punto);
    if (lunghezza_stringa - pos_punto - 1 == 2 ||
        lunghezza_stringa - pos_punto - 1 == 3)
            return 1;
    return 0;
}

int main()
{
    char s[] = "arrui.l@ombrioi.it";
    char t[] = "abC1";
    printf("Verifica numero chiocciole: %s %d\n",
           s, numero_chiocciole(s));
    printf("Verifica prima parte: %s %d\n",
           s, prima_parte_valida(s));
    int p = posizione(s, '@');
    printf("Posizione della chiocciola: %s %d\n",
           s, p);
    printf("Numero di punti totali: %s %d\n",
           s, quanti_caratteri(s, '.'));
    printf("Numero di punti dopo la chiocciola: %s %d",
           s, quanti_caratteri(s + p, '.'));
    printf("Stringa con solo caratteri alfabetici: %s %d\n",
           t, solo_alfabetici(t));
    printf("Controllo validità email: %s %d",
           s, email_valida(s));
    return 0;
}
