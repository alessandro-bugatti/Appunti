#include <iostream>

using namespace std;

struct Frazione{
    int numeratore;
    int denominatore;
};

void stampa(Frazione f)
{
    cout << endl << f.numeratore << "/"
    << f.denominatore << endl;
}

void input(Frazione &f)
{
    cout << "Inserisci il numeratore: ";
    cin >> f.numeratore;
    cout << "Inserisci il denominatore: ";
    cin >> f.denominatore;
}




//Funzione che riduce una frazione ai minimi termini
void minimi_termini(Frazione &a)
{

    for (int i = a.numeratore; i > 0 ; i--)
            if (a.numeratore % i == 0 &&
                a.denominatore % i == 0)
    {
        a.numeratore /= i;
        a.denominatore /= i;
        return;
    }
}

//Prima versione, in cui non si riduce la frazione
//ai minimi termini
Frazione somma(Frazione a, Frazione b)
{
    Frazione c;
    c.numeratore = a.numeratore*b.denominatore
        + b.numeratore*a.denominatore;
    c.denominatore = a.denominatore * b.denominatore;
    minimi_termini(c);
    return c;
}

Frazione differenza(Frazione a, Frazione b)
{
    Frazione c;
    b.numeratore *= -1;
    c = somma(a, b);
    return c;
}


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
    //Oppure di può usare la funzione input(c);

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
    /**
    Operatori di confronto, si possono usare?
    == > < >= <= !=
    //if ( a <= b ) // NO, nessuno di quelli che contengono < o >
    //if ( a == b) // SI, fanno un confronto byte a byte
    Operatori aritmetici, si possono usare?
    // +=/* NO
    */
    //Esempio di utilizzo di funzioni con strutture
    input(a);
    input(b);
    c = somma(a,b);
    stampa(c);
    c = {9, 15};
    minimi_termini(c);
    stampa(c);
    return 0;
}
