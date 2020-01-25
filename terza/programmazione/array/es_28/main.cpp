#include <iostream>

using namespace std;

const int N = 5;

int trova_massimo(int m[][N], int n, int &r, int &c)
{
    int r_max, c_max;
    r_max = 0;
    c_max = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < N; j++)
            if (m[i][j] > m[r_max][c_max])
            {
                r_max = i;
                c_max = j;

            }
    r = r_max;
    c = c_max;
    return m[r_max][c_max];
}

int main()
{
    int m[N][N];
    int r, c;
    int massimo;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            m[i][j] = rand()%100;
    massimo = trova_massimo(m, N, r, c);
    cout << "Massimo " << massimo <<
        " in posizione " << r << " , " << c << endl;
    return 0;
}
