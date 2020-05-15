#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, k;
    ifstream alfa("alfa.txt");
    ofstream beta("beta.txt");
    if(!alfa || !beta)
    {
        cout << "Errore" << endl;
        return -1;
    }
    cout << "Inserisci un numero: ";
    cin >> n;
    while(alfa >> k)
    {
        k += n;
        beta << k << endl;
    }
    return 0;
}
