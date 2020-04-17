#include <iostream>

using namespace std;

struct Frazione{
    int numeratore;
    int denominatore;
};

int main()
{
    Frazione a;
    //Assegnamento
    a.numeratore = 1;
    a.denominatore = 3;
    Frazione b;
    b = a;
    Frazione c;
    cout << "Inserisci una frazione" << endl;
    //cin >> c; NO
    cout << "Inserisci il numeratore: ";
    cin >> c.numeratore;
    cout << "Inserisci il denominatore: ";
    cin >> c.denominatore;
    //cout << c; NO
    cout << endl << c.numeratore << "/" << c.denominatore << endl;
    cout << endl << c.numeratore << endl << "-" << endl << c.denominatore << endl;
    /* Da fare
    19/128

    19
    ---
    128

    1562/353

    1562
    ----
    353
    */
    return 0;
}
