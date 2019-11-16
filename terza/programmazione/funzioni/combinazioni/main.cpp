#include <iostream>
#include <cmath>

using namespace std;
//Definizione della funzione
int fattoriale(int N)
{
    int f_n = 1;
    for (int i = 1; i <= N; i++)
        f_n *= i;
    return f_n;
}

int main()
{
    int n, k ;//, f_n = 1, f_k = 1, f_n_k = 1,
    int combinazioni;
    cout << "Inserisci n: ";
    cin >> n;
    cout << "Inserisci k: ";
    cin >> k;
    combinazioni = fattoriale(n)/
                (fattoriale(k)*fattoriale(n-k));
    cout << combinazioni;
    return 0;
}





