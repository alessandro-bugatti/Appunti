#include <iostream>

using namespace std;

int main()
{
    int N, altezza, peso, diff_altezze, diff_peso;
    int min_altezza = 10000, max_altezza = -1;
    int min_peso = 10000, max_peso = -1;
    cin >> N;
    cin >> altezza >> peso;
    min_altezza = max_altezza = altezza;
    min_peso = max_peso = peso;
    for (int i = 0; i < N - 1; i++)
    {
        cin >> altezza >> peso;
        if (altezza < min_altezza)
            min_altezza = altezza;
        if (altezza > max_altezza)
            max_altezza = altezza;
        if (peso < min_peso)
            min_peso = peso;
        if (peso > max_peso)
            max_peso = peso;
    }
    diff_altezze = max_altezza - min_altezza;
    diff_peso = max_peso - min_peso;
    cout << diff_altezze << " " << diff_peso << endl;
    return 0;
}
