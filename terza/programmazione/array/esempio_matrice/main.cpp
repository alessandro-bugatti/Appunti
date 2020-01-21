#include <iostream>

using namespace std;

const int DIM = 5;

int main()
{
    //Esempio di dichiarazione di matrice quadrata
    int m[DIM][DIM];
    //Esempio di assegnamento
    for (int i = 0; i < DIM; i++)
        for (int j = 0; j < DIM; j++)
            m[i][j] = rand()%100;
    //Esempio di stampa
    for (int i = 0; i < DIM; i++){
        for (int j = 0; j < DIM; j++)
            cout << m[i][j] << "\t" ;
        cout << endl;
    }

    int r = 0, c = 0;
    for (int i = 0; i < DIM; i++)
        for (int j = 0; j < DIM; j++)
            if (m[i][j] > m[r][c])
            {
                r = i;
                c = j;
            }
    cout << "Il valore massimo della matrice è " <<
        m[r][c] << " e si trova in posizione (" <<
        r + 1 << "," << c + 1 << ")" << endl;
    //Verifica della simmetria della matrice

    bool simmetrica = true;
    for (int i = 0; i < DIM; i++)
        for (int j = i + 1; j < DIM; j++)
            if (m[i][j] != m[j][i])
                simmetrica = false;
    if (simmetrica)
        cout << "La matrice è simmetrica" << endl;
    else
        cout << "La matrice non è simmetrica" << endl;

    return 0;

    //
}
