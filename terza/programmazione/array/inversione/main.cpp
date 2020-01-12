#include <iostream>

using namespace std;
const int DIM = 5;

int main()
{
    int v[DIM];
    for (int i = 0; i < DIM; i++)
    {
        v[i] = rand();
    }
    for (int i = 0; i < DIM; i++)
    {
        cout << v[i] << endl;
    }
    int temp[DIM];
    for (int i = 0; i < DIM; i++)
    {
        temp[DIM - i - 1] = v[i];
    }
    for (int i = 0; i < DIM; i++)
    {
        v[i] = temp[i];
    }
    cout << "valori invertiti" << endl;
    for (int i = 0; i < DIM; i++)
    {
        cout << v[i] << endl;
    }
    for (int i = 0; i < DIM/2; i++)
    {
        int temp;
        temp = v[i];
        v[i] = v[DIM - i - 1];
        v[DIM - i - 1] = temp;
    }
    cout << "valori invertiti" << endl;
    for (int i = 0; i < DIM; i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}
