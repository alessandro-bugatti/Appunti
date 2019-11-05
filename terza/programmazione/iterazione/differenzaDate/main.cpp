#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cstdlib>

using namespace std;

int main()
{
    int long long primoGiorno, primoMese, primoAnno;
    int long long secondoGiorno, secondoMese, secondoAnno;
    int long long giorniDifferenza, giorniFinali = 0, giorniFinaliSecondo = 0;

    cout << "inserisci la prima data(gg mm anno): ";
    cin >> primoGiorno>> primoMese>>primoAnno;
    cout << "inserisci la seconda data (gg mm anno): ";
    cin >> secondoGiorno>> secondoMese>> secondoAnno;


    for (int i = 0; i < primoAnno; i++)
    {
        if (i % 4 != 0 || (i % 100 == 0 && i % 400 != 0))
        {
            giorniFinali = giorniFinali + 365;
        }
        else
        {

            giorniFinali = giorniFinali + 366;

        }
    }

    if (primoMese == 1)
        giorniFinali = giorniFinali + 31;
    if (primoMese == 2)
        giorniFinali = giorniFinali + 59;
    if (primoMese == 3)
        giorniFinali = giorniFinali + 90;
    if (primoMese == 4)
        giorniFinali = giorniFinali + 120;
    if (primoMese == 5)
        giorniFinali = giorniFinali + 151;
    if (primoMese == 6)
        giorniFinali = giorniFinali + 181;
    if (primoMese == 7)
        giorniFinali = giorniFinali + 212;
    if (primoMese == 8)
        giorniFinali = giorniFinali + 243;
    if (primoMese == 9)
        giorniFinali = giorniFinali + 273;
    if (primoMese == 10)
        giorniFinali = giorniFinali + 304;
    if (primoMese == 11)
        giorniFinali = giorniFinali + 334;
    if (primoMese == 12)
        giorniFinali = giorniFinali + 365;
    if (primoAnno % 400 == 0 || primoAnno % 4 == 0 && primoAnno % 100 != 0)
        giorniFinali = giorniFinali + 1;

    giorniFinali = giorniFinali + primoGiorno;



    for (int i = 0; i < secondoAnno; i++)
    {
        if (i % 4 != 0 || (i % 100 == 0 && i % 400 != 0))
        {
            giorniFinaliSecondo = giorniFinaliSecondo + 365;
        }
        else
        {

            giorniFinaliSecondo = giorniFinaliSecondo + 366;

        }
    }

    if (secondoMese == 1)
        giorniFinaliSecondo = giorniFinaliSecondo + 31;
    if (secondoMese == 2)
        giorniFinaliSecondo = giorniFinaliSecondo + 59;
    if (secondoMese == 3)
        giorniFinaliSecondo = giorniFinaliSecondo + 90;
    if (secondoMese == 4)
        giorniFinaliSecondo = giorniFinaliSecondo + 120;
    if (secondoMese == 5)
        giorniFinaliSecondo = giorniFinaliSecondo + 151;
    if (secondoMese == 6)
        giorniFinaliSecondo = giorniFinaliSecondo + 181;
    if (secondoMese == 7)
        giorniFinaliSecondo = giorniFinaliSecondo + 212;
    if (secondoMese == 8)
        giorniFinaliSecondo = giorniFinaliSecondo + 243;
    if (secondoMese == 9)
        giorniFinaliSecondo = giorniFinaliSecondo + 273;
    if (secondoMese == 10)
        giorniFinaliSecondo = giorniFinaliSecondo + 304;
    if (secondoMese == 11)
        giorniFinaliSecondo = giorniFinaliSecondo + 334;
    if (secondoMese == 12)
        giorniFinaliSecondo = giorniFinaliSecondo + 365;
    if ((secondoAnno % 4 == 0 && secondoAnno % 100 != 0) || secondoAnno % 400 == 0 )
        giorniFinaliSecondo = giorniFinaliSecondo + 1;

    giorniFinaliSecondo = giorniFinaliSecondo + secondoGiorno;

    giorniDifferenza = giorniFinaliSecondo - giorniFinali;
    cout << "La differenza di giorni e: "<<giorniDifferenza;

    return 0;
}



