#include <iostream>

using namespace std;

//Ipotesi: i caratteri di punteggiatura sono attaccati correttamente
//Invece gli spazi possono essere usati male
int conta_parole(char s[])
{
    int conta = 0;
    int i = 0;
    for (i = 0; s[i] == ' '; i++);
    for (; s[i] != '\0'; i++)
        if ((s[i] == ' ' && s[i + 1] != ' ') &&
            (s[i] == ' ' && s[i + 1] != '\0'))
            conta++;
    return conta + 1;
}

//Implementare per la prossima volta
void my_strcpy(char d[], char s[]);//Copia s sopra d
void my_strcat(char d[], char s[]);//Concatena s dopo d
//Ritorna un valore negativo per indicare che d < s
//Ritorna 0 per indicare che d = s
//Ritorna un valore positivo se d > s
int my_strcmp(char d[], char s[]);


int main()
{
    char s[] = "     Data,        Brescia ";
    cout << "Il numero di parole contenute nella frase \"" <<
        s << "\" vale " << conta_parole(s) << endl;
    return 0;
}
