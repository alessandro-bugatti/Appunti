#include <stdio.h>
#include <stdlib.h>

//Versione migliorata con gestione di
//carattere non appartenenti all'alfabeto
//inglese minuscolo: i caratteri non
//validi vengono ignorati e il loro
//spazio "recuperato"
void cifra(char s[], char c[])
{
    int i, j = 0;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i]>= 'a' && s[i]<= 'z')
        {
            s[j] = c[s[i]-'a'];
            j++;
        }
    s[j] = '\0';

}

int main()
{
    char chiave[] ="qwertyuiopasdfghjklzxcvbnm";
    char testo[200];
    printf("Inserisci la frase da codificare: ");
    scanf("%s",testo);
    cifra(testo, chiave);
    printf("%s", testo);
    return 0;
}
