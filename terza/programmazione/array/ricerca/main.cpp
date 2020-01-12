#include <iostream>

using namespace std;
const int DIM = 100;

int main()
{
    int v[DIM];
    int n;
    for ( int i = 0; i < DIM; i++)
    {
        //cout << "inserisci un valore: " << endl;
        //cin >> v[i];
        v[i] = rand()%200;

    }
    do
    {
        cout << "inserisci valore da cercare: " << endl;
        cin >> n;
        if (n != 0)
        {
            int conta = 0;
            for(int i = 0; i < DIM; i++)
            {

                if (v[i] == n)
                    conta++;

            }
            if (conta > 0)
                cout << "trovato" << endl;
            else
                cout << "non trovato" << endl;
        }
    }while (n != 0);
    return 0;
}
