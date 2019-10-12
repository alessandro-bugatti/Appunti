#include <iostream>

using namespace std;

int main()
{
    int laura;
    int anna, piero;
    int punteggio_laura, punteggio_anna;
    cout << "Inserisci il numero di Laura (1-10): ";
    cin >> laura;
    cout << "Inserisci il numero di Anna (1-10): ";
    cin >> anna;
    cout << "Inserisci il numero di Piero (1-10): ";
    cin >> piero;
    if (laura - piero > 0)
    {
        punteggio_laura = laura - piero;
    }
    else
    {
        punteggio_laura = piero - laura;
    }
    punteggio_anna = anna - piero;
    if (punteggio_anna < 0)
        punteggio_anna = - punteggio_anna;

    if (punteggio_laura < punteggio_anna)
    {
        cout << "Ha vinto Laura";
    }
    else if (punteggio_laura == punteggio_anna)
    {
        cout << "Pareggio";
    }
    else
    {
        cout << "Ha vinto Anna";
    }
    return 0;
}
