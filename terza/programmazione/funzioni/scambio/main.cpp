#include <iostream>

using namespace std;
/*
Passaggio per valore

void scambio(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

*/

//Passaggio per riferimento
void scambio(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}



int main()
{
    int a = 5, b = 13;
    cout << a << " " << b << endl;
    scambio(a,b);
    cout << a << " " << b << endl;
    return 0;
}
