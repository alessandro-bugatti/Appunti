#include <iostream>

using namespace std;

const int DIM = 10;

int copiaValoriCompresi(int v[], int n,int c[], int minimo, int massimo)
{
    int conta = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] > minimo && v[i] < massimo){
            c[conta]=v[i];
            conta++;
        }
    }
    return conta;
}

int main()
{
    int v[DIM];
    int c[DIM];
    int minimo, massimo;

    for (int i = 0; i < DIM; i++)
    {
        v[i] = rand();
        //cout << v[i] << endl;
    }
    cout << "inserisci minimo e massimo: ";
    cin >> minimo >> massimo;
    int copiati = copiaValoriCompresi(v, DIM,c, minimo, massimo);
    for (int i =0; i< copiati; i++){
        cout << c[i] <<endl;
    }
    return 0;
}
