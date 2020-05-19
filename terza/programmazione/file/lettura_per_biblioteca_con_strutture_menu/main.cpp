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

void menu()
{
    cout << "1) Aggiungi un nuovo punto" << endl;
    cout << "2) Rimuovi un punto" << endl;
    cout << "3) Visualizza tutti i punti" << endl;
    cout << "0) Esci" << endl;
}

void aggiungi_punto(Punto v[], int &n_punti)
{
    Punto nuovo;
    cout << "Inserisci un nuovo punto: ";
    cout << " x = ";
    cin >> nuovo.x;
    cout << " y = ";
    cin >> nuovo.y;
    //Inserisce il nuovo valore in memoria e incrementa il contatore
    v[n_punti] = nuovo;
    n_punti++;
}

bool elimina_punto(Punto v[], int &n_punti, int pos)
{
    //Indice dell'elemento da eliminare non valido
    if (pos > n_punti - 1 || pos < 0)
        return false;
    //Indice valido
    for (int i = pos; i < n_punti-1  ; i++)
        v[i] = v[i+1];
    n_punti--;
    return true;
}

void stampa_punti(Punto v[], int n_punti)
{
    for (int i = 0; i < n_punti; i++)
        cout << v[i].x << " " << v[i].y << endl;
}

int main()
{
    int n_punti, scelta;
    Punto v[1000];
    //Carimento da file
    ifstream read ("memorizzati.txt");
    if (!read)
        n_punti = 0;
    else
        read >> n_punti;
    for (int i = 0; i < n_punti; i++){
        read >> v[i].x;
        read >> v[i].y;
    }
    do{
        menu();
        cin >> scelta;
        if (scelta == 1)
            aggiungi_punto(v, n_punti);
        else if(scelta == 2)
        {
            int pos;
            cout << "Inserisci la posizione da cancellare (1 - "
             << n_punti << ")" << endl;
            cin >> pos;
            //Si potrebbe usare il valore di ritorno per dare
            //indicazioni all'utente sulla riuscita dell'operazione
            elimina_punto(v, n_punti, pos - 1);
        }
        else if (scelta == 3)
            stampa_punti(v, n_punti);

    }while(scelta != 0);
    //Altre operazioni
    //Salvataggio dei numeri in memoria
    ofstream saved ("memorizzati.txt");
    if (!saved)
    {
        cout << "Errore: salvataggio non riuscito" << endl;
        return -1;
    }
    saved << n_punti << endl;
    for (int i = 0; i < n_punti; i++)
        saved << v[i].x << " " << v[i].y << endl;


    saved.close();

    return 0;
}
