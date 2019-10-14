#include <iostream>

using namespace std;

int main()
{
    int N;
    float risultato = 1;
    cout << "Inserisci un numero intero: " << endl;
    cin >> N;
    if (N > 0)
    {
        for(int i = 0; i < N; i++) //i++ -> i = i + 1
        {
            risultato = risultato*2;
            //risultato *= 2;
        }
    }
    else
    {
        for(int i = 0; i < -N; i++) //i++ -> i = i + 1
        {
            //cout << i << " " << risultato << endl;
            risultato = risultato*0.5;
            //risultato *= 2;
        }
    }
    cout << "Il risultato vale: " << risultato << endl;
    return 0;
}
