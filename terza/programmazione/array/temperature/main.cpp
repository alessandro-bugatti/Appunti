#include <iostream>

using namespace std;

const int MESI = 12;

int main()
{
    //Dichiarazione di un vettore
    int m;
    float precipitazioni[MESI];
    int n;
    //oppure float precipitazioni[12];
    /*NON FATE MAI COSI
    int n;
    cin >> n;
    float precipitazioni[n];
    */
    for (int i = 0; i < MESI; i++)
    {
        //cout << "Inserisci le precipatazioni del mese " << i+1 << ": ";
        //cin >> precipitazioni[i];
        precipitazioni[i] = rand();
    }

    for (int i = 0; i < MESI; i++)
    {
        cout << precipitazioni[i] << endl;
    }

    return 0;
}
