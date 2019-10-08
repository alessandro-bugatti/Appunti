#include <iostream>

using namespace std;

int main()
{
    float raggio;
    float perimetro;
    cout << "Inserisci il raggio: ";
    cin >> raggio;
    perimetro = raggio * 2 * 3.1415;
    cout << "Il perimetro del cerchio di raggio "
        << raggio << " vale " << perimetro << endl;
    return 0;
}
