#include <iostream>

using namespace std;

const int N = 5;

void trasposta(int m[][N], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < N; j++)
        {
            int temp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = temp;
        }
}

void stampa(int m[][N], int n)
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < N; j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }
}

int main()
{
    int m[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            m[i][j] = rand()%100;
    cout << "Originale" << endl;
    stampa(m, N);
    trasposta(m, N);
    cout << "Trasposta" << endl;
    stampa(m, N);
    trasposta(m, N);
    cout << "Trasposta applicata due volte" << endl;
    stampa(m, N);
    return 0;
}
