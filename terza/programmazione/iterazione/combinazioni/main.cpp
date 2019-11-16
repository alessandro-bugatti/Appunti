#include <iostream>

using namespace std;

int main()
{
    int n, k, f_n = 1, f_k = 1, f_n_k = 1,
    combinazioni;
    cout << "Inserisci n: ";
    cin >> n;
    cout << "Inserisci k: ";
    cin >> k;
    //Senza utilizzo di funzioni
    for (int i = 1; i <= n; i++)
        f_n *= i;
    for (int i = 1; i <= k; i++)
        f_k *= i;
    for (int i = 1; i <= n - k; i++)
        f_n_k *= i;
    combinazioni = f_n/(f_k*f_n_k);
    cout << combinazioni << endl;
    return 0;
}
