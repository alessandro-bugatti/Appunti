#include <iostream>

using namespace std;

const int DIM = 3;

//I valori di r e c sono compresi tra 1 e 3
bool mossa_valida(int m[][DIM], int r, int c)
{
    if (r > DIM || r < 1)
        return false;
    if (c > DIM || c < 1)
        return false;
    if (m[r-1][c-1] != 0)
        return false;
    return true;
}

/**
*   Ritorna 1 se ha vinto il giocatore 1
*   Ritorna 2 se ha vinto il giocatore 2
*   Ritorna 0 se non è finita la partita
*   Ritorna 3 per la parità
*/
int controlla_situazione(int m[][DIM])
{
    //Controllo se ci sono dei tris nelle righe
    for (int i = 0; i < DIM; i++)
        if (m[i][0] == m[i][1] &&
            m[i][2] == m[i][1] &&
            m[i][0] != 0)
            return m[i][0];
    //Controllo se ci sono dei tris nelle colonne
    for (int i = 0; i < DIM; i++)
        if (m[0][i] == m[1][i] &&
            m[2][i] == m[1][i] &&
            m[0][i] != 0)
            return m[0][i];
    //Controllo la diagonale principale
    if (m[0][0] == m[1][1] &&
            m[2][2] == m[1][1] &&
            m[1][1] != 0)
            return m[1][1];
    //Controllo la diagonale secondaria
    if (m[0][2] == m[1][1] &&
            m[2][0] == m[1][1] &&
            m[1][1] != 0)
            return m[1][1];
    for (int i = 0; i < DIM; i++)
        for (int j = 0; j < DIM; j++)
            if (m[i][j] == 0)
                return 0;
    return 3;
}

char stampa_simbolo(int n)
{
    if (n == 1)
        return 'X';
    else if (n == 2)
        return  'O';
    else
        return  ' ';
}

void stampa(int m[][DIM])
{
    for (int i = 0; i < DIM; i++){
        cout << stampa_simbolo(m[i][0]);
        for (int j = 1; j < DIM; j++)
            cout << " | " << stampa_simbolo(m[i][j]);
        cout << endl;
    }
}

int main()
{
    int tris[][DIM] = {
            {0,0,1},
            {1,2,0},
            {1,2,0}
        };
    stampa(tris);
    cout << controlla_situazione(tris) << endl;
    tris[0][1] = 2;
    stampa(tris);
    cout << controlla_situazione(tris) << endl;
    tris[0][1] = 0;
    tris[1][1] = 1;
    stampa(tris);
    cout << controlla_situazione(tris) << endl;
    return 0;
}
