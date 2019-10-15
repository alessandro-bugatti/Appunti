#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
    int n;
    /* Inizializza il seme del generatore
    di numeri casuali prendendo il tempo del
    computer, che cambierà a ogni esecuzione
    del programma. Va chiamata solo una
    volta all'inizio del programma*/
    srand(time(NULL));
    for (int i = 0; i < 20; i++){
        /*rand genera un intero casuale
        compreso tra 0 e un valore grande che
        dipende dal compilatore. Se serve un
        valore piccolo si usa l'operatore di modulo
        */
        n = rand()%6 + 1; //simula un dado da 6
        cout << n << endl;
    }
    return 0;
}
