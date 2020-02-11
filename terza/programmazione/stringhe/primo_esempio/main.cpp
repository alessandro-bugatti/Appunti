#include <iostream>

using namespace std;

int main()
{
    char s[100], t[100];
    cin >> s;
    cout << "Abbiamo inserito: " << s << endl;
    // non ha senso i < 10, poichè la lunghezza
    //dipende dalla parola inserita, che non
    //si può sapere a priori
    for (int i = 0; i < 10; i++)
        cout << s[i];
    cout << endl;
    int conta = 0;
    int i;
    //Invece così è corretto perchè ci si ferma
    //una volta raggiunto il terminatore di stringa
    for (i = 0; s[i] != '\0' ; i++)
        if (s[i] == 'a')
            conta++;
    cout << "La stringa contiene " << conta
    << " lettere 'a'" << endl;
    cout << "La stringa inserita è lunga " <<
    i << " caratteri." << endl;
    //Altro modo per contare i caratteri
    conta = 0;
    while (s[conta] != '\0')
        conta++;
    cout << "La stringa inserita è lunga " <<
    conta << " caratteri." << endl;
    //Sostituzione in un valore, come per i vettori
    s[0] = 'r';
    cout << "Parola dopo sostituzione: " <<
    s << endl;
    cout << "Inserisci una seconda stringa: ";
    cin >> t;
    //non ha senso perchè confronta gli indirizzi
    //quindi darà sempre lo stesso risultato indipendentemente
    //dal contenuto di s e t
    if (s < t)
        cout << "s è minore di t" << endl;
    else
        cout << "t è minore di s" << endl;
    return 0;
}

