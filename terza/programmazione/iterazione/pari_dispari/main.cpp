#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int giocatore, computer;
    int scelta;
    int continua = 0;
    srand(time(NULL));

    do{
        cout << "Scegli pari (0) oppure dispari(1): ";
        cin >> scelta;
        cout << "Scegli il numero da tirare (1-5): ";
        cin >> giocatore;
        while (giocatore < 1 || giocatore > 5)
        {
            cout << "Attenzione! Il numero deve essere compreso tra 1 e 5: ";
            cin >> giocatore;
        }
        computer = rand()%5 + 1;
        cout << "Computer: " << computer << endl;
        int totale = giocatore +  computer;
        if ((totale%2 == 0 && scelta == 0) ||
            (totale%2 == 1 && scelta == 1))
            cout << "Hai vinto!" << endl;
        else
            cout << "Hai perso!" << endl;

        cout << "Vuoi fare un'altra partita? (1 per continuare)";
        cin >> continua;
    }while(continua == 1);
    return 0;
}
