#include <stdio.h>
#include <stdlib.h>

//Si usa l'alfabeto inglese
//la frase è tutta in minuscola
//contiene solo caratteri

void cifra(char s[], int chiave)
{
    int i;
    for (i = 0; s[i] != 0; i++)
        s[i] = ((s[i]-'a') + chiave)%26 + 'a';
}

int main()
{
    char frase[200];
    printf("Inserisci la frase da codificare: ");
    scanf("%s", frase);
    cifra(frase, 13);
    printf("%s\n", frase);
    return 0;
}
