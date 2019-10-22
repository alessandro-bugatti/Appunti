#include <iostream>

using namespace std;

int main()
{
    int mese, giorni_del_mese, giorno_iniziale;
    int i;
    cout << "Inserisci il mese" << "\n"
    << "1 = gennaio" << "\n"
    << "2 = febbraio" << "\n"
    << "3 = marzo" << "\n"
    << "4 = aprile" << "\n"
    << "5 = maggio" << "\n"
    << "6 = giugno" << "\n"
    << "7 = luglio" << "\n"
    << "8 = agosto" << "\n"
    << "9 = settembre" << "\n"
    << "10 = ottobre" << "\n"
    << "11 = novembre" << "\n"
    << "12 = dicembre" << endl;
    cin >> mese;
    cout << "\n";
    if (mese == 2)
    {
        giorni_del_mese = 28;
    }
    else if (mese == 4 || mese == 6 || mese == 9 || mese == 11)
    {
        giorni_del_mese = 30;
    }
    else
        giorni_del_mese = 31;
    cout << "Inserisci il giorno iniziale" << "\n"
    << "1 = lunedi" << "\n"
    << "2 = martedi" << "\n"
    << "3 = mercoledi" << "\n"
    << "4 = giovedi" << "\n"
    << "5 = venerdi" << "\n"
    << "6 = sabato" << "\n"
    << "7 = domenica" << endl;
    cin >> giorno_iniziale;
    cout << "\n\n\n";
    for (i = 0; i < giorno_iniziale - 1; i++)
    {
        cout << "\t";
    }
    for (i = 1; i <= giorni_del_mese; i++)
    {
        cout << i << "\t";
        if ((i + giorno_iniziale - 1) %7 == 0)
        {
            cout << "\n\n";
        }
    }
    system("cls");
    return 0;
}
