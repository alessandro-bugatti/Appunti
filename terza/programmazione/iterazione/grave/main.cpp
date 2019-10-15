#include <iostream>

using namespace std;

int main()
{
    float h, spazio = 0, t = 0, DELTA = 0.1, G = 9.81;
    cout << "Inserisci l'altezza iniziale: ";
    cin >> h;
    while (h - spazio > 0)
    {
        cout << t << " ***>>> " << h - spazio << endl;
        t += DELTA;
        spazio = 0.5*G*t*t;
    }
    return 0;
}
