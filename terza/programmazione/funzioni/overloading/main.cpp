#include <iostream>

using namespace std;

//Funzione che ritorna n numeri interi
//compresi tra 1 e n
int random(int n)
{
    return rand()%n + 1;
}

//Funzione che ritorna n numeri interi
//compresi tra inizio e fine estremi inclusi
int random(int inizio, int fine)
{
    return rand()%(fine - inizio + 1) + inizio;
}

int main()
{
    cout << random(3,6) << endl;
    return 0;
}
