#include <iostream>

using namespace std;

int main()
{
    int N;
    bool positivo = true;
    float risultato = 1;
    cout << "Inserisci un numero intero: " << endl;
    cin >> N;
    if (N < 0)
    {
        N = -N;
        positivo = false;
    }
    for(int i = 0; i < N; i++) //i++ -> i = i + 1
    {
        risultato = risultato*2;
        //risultato *= 2;
    }
    if (positivo == false)
        risultato = 1/risultato;
    cout << "Il risultato vale: " << risultato << endl;
    return 0;
}
