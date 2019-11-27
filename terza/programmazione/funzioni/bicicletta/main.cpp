#include <iostream>

using namespace std;

float v = 3; //globale

//La funzione vuole il diametro in metri
//e il numero di giri intero
//Ritorna la velocità in Km/h
float velocita(float diametro, int n_giri)
{
    float v;
    v = 3.1416*diametro*n_giri*6;
    v = v*60.0/1000.0;
    return v;
}

int main()
{
    float diametro;
    int giri;
    //float v;
    cout << "Inserisci il diametro in metri: ";
    cin >> diametro;
    cout << "Inserisci il numero di giri: ";
    cin >> giri;
    v = velocita(diametro, giri);
    cout << v << endl;
    return 0;
}



