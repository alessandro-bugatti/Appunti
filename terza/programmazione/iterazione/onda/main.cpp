#include <iostream>

using namespace std;

int main()
{
    float h;
    int k = 0;
    cout<<"Inserisci l'altezza: ";
    cin>>h;
    while (h >= 1)
    {
        k = k + 1;
        h = h/2;
    }
    cout<<"L'onda finisce dopo ";
    cout << k << " chilometri" << endl;
    return 0;
}
