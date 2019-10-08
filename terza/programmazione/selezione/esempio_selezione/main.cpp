#include <iostream>

using namespace std;

int main()
{
    float voto;
    cout << "Inserisci il voto: ";
    cin >> voto;
    if (voto >= 6)
    {
        cout << endl << "Voto positivo" << endl << endl;
        if (voto >= 8)
        {
            cout << "Sei stato molto bravo" << endl;
        }
        else
        {
            cout << "Bravo, puoi fare meglio";
        }

    }
    else
    {
        cout << endl << "Voto insufficiente" << endl << endl;
        cout << "Devi migliorare" << endl;

    }

    return 0;
}
