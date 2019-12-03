#include <iostream>

using namespace std;



//Funzione che ritorna n numeri interi
//compresi tra inizio e fine estremi inclusi
int random(int inizio, int fine)
{
    return rand()%(fine - inizio + 1) + inizio;
}

//Funzione che ritorna n numeri interi
//compresi tra 1 e n
int random(int n)
{
    return random(1,n);
}

int main()
{
    cout << random(3,6) << endl;
    for (int i = 0; i < 100; i++)
        cout << random(6) << endl;
    return 0;
}
