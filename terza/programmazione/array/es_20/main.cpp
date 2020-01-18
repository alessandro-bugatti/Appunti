#include <iostream>

using namespace std;

const int DIM = 10;

int valoriCompresi(int v[], int n, int minimo, int massimo)
{
    int conta = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] > minimo && v[i] < massimo)
        {
            conta++;
        }
    }
    return conta;
}

int main()
{
    int v[DIM];
    int minimo, massimo;

    for (int i = 0; i < DIM; i++)
    {
        v[i] = rand();
        //cout << v[i] << endl;
    }

    cout << "inserisci massimo e minimo: ";
    cin >> massimo >> minimo;
    cout << "il numero di valori è: " << valoriCompresi(v, DIM, minimo, massimo);
    return 0;
}
