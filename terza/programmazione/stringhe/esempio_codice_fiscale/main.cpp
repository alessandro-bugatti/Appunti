#include <iostream>
#include <fstream>
#include <map>

using namespace std;
/**
*  Esempio che carichi tutti i comuni d'Italia e i codici
* associati, attenzione che i nomi dei comuni sono tutti in maiuscolo
*/
void carica_parole(string nomefile, map <string,string> &codici)
{
    ifstream in(nomefile);
    string temp;
    while (in >> temp)
    {
        int pos = temp.find(";");
        string nome = temp.substr(0, pos);
        string codice = temp.substr(pos + 1);
        codici[nome] = codice;
    }
}

int main()
{
    map <string, string> codici;
    carica_parole("comuni.csv", codici);
    cout << "Comune di Brescia : " <<
    codici["BRESCIA"] << endl;
    cout << "Comune di Gussago : " <<
    codici["GUSSAGO"] << endl;
    string comune;
    cout << "INserisci il nome del tuo comune: ";
    cin >> comune;
    if (codici[comune] != "")
        cout << codici[comune] << endl;
    else
        cout << "Non esiste" << endl;

    return 0;
}

