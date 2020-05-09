#include <iostream>
#include <fstream>

using namespace std;

/*
    Per tutti i file abbiamo almeno tre operazioni:
    1) Apertura
    2) Lettura/scrittura
    3) Chiusura
*/

int main()
{
    ifstream in("prova.txt"); //Apro un file di input

    //Controllo sull'apertura
    if (!in)
    {
        //Reazione all'errore
       cout << "Errore nell'apertura del file" << endl;
       return 0;
    }
    //Fase di lettura
    int n, m;
    in >> n ;
    for (int i = 0; i < n; i++)
    {
        in >> m;
        cout << m << endl;
    }
    return 0;
}
