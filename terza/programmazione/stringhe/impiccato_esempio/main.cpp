#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
/**
 * Esempio di come utilizzare una funzione per caricare
 * tutte le parole comprese nel file italian che contengono
 * solo lettere minuscole
*/
using namespace std;

string parole[120000];

bool parola_corretta(const string &s)
{
    for (int i = 0; i < s.size(); i++)
        if (s.at(i) < 'a' || s.at(i) > 'z')
            return false;
    return true;
}

int carica_parole(string nomefile, string parole[])
{
    ifstream in(nomefile);
    int num_parole = 0;
    string temp;
    while (in >> temp)
    {
        if (parola_corretta(temp))
        {
            parole[num_parole] = temp;
            num_parole++;
        }
    }
    return num_parole;
}


int main()
{
    srand(time(NULL));
    int num_parole = carica_parole("italian", parole);
    cout << "Numero parole incluse nel vettore = " <<
    num_parole << endl;
    cout << "Scelta di una parola a caso: ";
    cout << parole[(rand()*0xFFFF + rand()) % num_parole] << endl;
    return 0;
}
