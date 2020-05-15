#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream testo("testo.txt");
    int conta = 0;
    string parola, letta;
    if(!testo)
    {
        cout << "Errore" << endl;
        return -1;
    }
    //Inserisce la parola da cercare
    cout << "Inserisci la parola da cercare: ";
    cin >> parola;
    while (testo >> letta)
        if (letta == parola)
            conta++;
    if (conta == 0)
        cout << "Parola non trovata" << endl;
    else
        cout << "La parola " << parola << " è presente "
        << " nel file " << conta << " volte." << endl;
    return 0;
}
