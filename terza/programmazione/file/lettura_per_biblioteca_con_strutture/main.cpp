/*
    Autore: Neri
*/

#include <iostream>
#include <fstream>


using namespace std;

struct Punto{
    int x;
    int y;
};

int main()
{
    int n_interi;
    Punto v[1000], nuovo;
    ifstream read ("memorizzati.txt");
    if (!read)
        n_interi = 0;
    else
        read >> n_interi;
    for (int i = 0; i < n_interi; i++){
        read >> v[i].x;
        read >> v[i].y;
    }
    cout << "Inserisci un nuovo punto: ";
    cin >> nuovo.x;
    cin >> nuovo.y;
    //Inserisce il nuovo valore in memoria e incrementa il contatore
    v[n_interi] = nuovo;
    n_interi++;
    //Altre operazioni
    //Salvataggio dei numeri in memoria
    ofstream saved ("memorizzati.txt");
    if (!saved)
    {
        cout << "Errore: salvataggio non riuscito" << endl;
        return -1;
    }
    saved << n_interi << endl;
    for (int i = 0; i < n_interi; i++)
        saved << v[i].x << " " << v[i].y << endl;


    saved.close();

    return 0;
}
