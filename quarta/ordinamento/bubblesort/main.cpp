#include <iostream>

using namespace std;

const int N = 5;

int main()
{
    int v[N], temp, numero;
    for (int i=0; i<N; i++)
        v[i] = rand();
    cout << "Vettore disordinato: ";
    for(int i=0; i<N; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for(int i=0; i<N; i++)
    {
        bool scambio = false;
        for(int j=N-1; j>=i; j--)
        {
            if(v[j]>v[j+1])
            {
                temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
                scambio = true;
            }
        }
        if (!scambio)
            break;
    }
    cout << "Vettore ordinato: ";
    for(int i=0; i<N; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}

