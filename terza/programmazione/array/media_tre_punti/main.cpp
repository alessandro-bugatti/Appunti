#include <iostream>
#include <cstdlib>

using namespace std;

const int DIM = 10;

int media_mobile(int vet[], int n) //il parametro formale di un vettore ha le parentesi quadre vuote
{
    int temp[DIM];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            temp[i] = (2 * vet[i] + vet[i+1]) / 3; //ogni elemento del vettore viene individuato dalle parentesi quadre con un indice
        else if (i == n - 1)
            temp[i] = (2 * vet[i] + vet[i-1]) / 3;
        else
            temp[i] = (vet[i-1] + vet[i] + vet[i+1]) / 3;
    }
    for (int i = 0; i < n; i++)
    {
        vet[i] = temp[i];
    }
}

void inizializza(int v[], int n, int massimo)
{
    for (int i = 0; i < n; i++)
    {
        v[i] = rand()%massimo+1;
    }
}

void stampa_per_righe(int v[], int n, int numero_colonne)
{
    int spaziatura = 0;
    for(int i = 0; i < n; i++)
    {
        spaziatura++;
        cout << "v[" << i << "] = " << v[i] <<  "\t";
        if (spaziatura == numero_colonne)
        {
            spaziatura = 0;
            cout << endl;
        }
    }
}

int main()
{
    int v[DIM]; //in dichiarazione stabilire la dimensione del vettore
    inizializza(v, DIM, 50); //il passaggio del vettore vviene con il nome senza parentesi
    cout << "Vettore di partenza:" << endl;
    stampa_per_righe(v, DIM, 3);
    media_mobile(v, DIM);
    cout << endl << endl << "Media a tre punti:" << endl;
    stampa_per_righe(v, DIM, 3);
    cout << endl;
    return 0;
}
