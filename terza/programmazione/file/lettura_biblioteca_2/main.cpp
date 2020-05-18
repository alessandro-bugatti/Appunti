#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    cout << "inserisci numero: ";
    cin >> n;
    ofstream  numeri ("numeri.txt", ios_base::app);
    numeri << n << endl;
    numeri.close();
    return 0;
}
