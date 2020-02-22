#include <iostream>

using namespace std;

//Ipotesi: il carattere c può essere solo una
//lettera minuscola
char codifica(char c, int n)
{
    return (c + n - 'a')%26 + 'a';
}

//Elimina tutti i caratteri che non sono lettere
//e le maiuscole le fa diventare minuscole
void pulisci(char s[])
{

}

void codifica_stringa(char s[], int n)
{
    for (int i = 0; s[i] != '\0'; i++)
        s[i] = codifica(s[i], n);
}

char decodifica(char c, int n)
{

}



int main()
{
    char s[] = "Ciao a tutti, zozzoni!";
    pulisci(s);
    cout << "Stringa in chiaro: " << s << endl;
    codifica_stringa(s,3);
    cout << "Stringa codificata: " << s << endl;
    return 0;
}
