#include <iostream>
#include <cstring> //Per le stringhe C
#include <string> //Per le stringhe C++

using namespace std;

int main()
{
    char s[100];
    string stringa;
    //s = "pippo"; //Sbagliata
    strcpy (s, "pippo");
    cout << s << endl;
    stringa = "pippo";
    cout << stringa << endl;
    stringa = "ciao a tutti";
    cout << stringa << endl;
    stringa = s;
    if (stringa == "pippo")
        cout << "Uguale" << endl;
    string s2 = "piero";
    if (stringa < s2)
        cout << "Minore";
    stringa = stringa + "-" + s2;
    cout << stringa << endl;
    for (int i = 0; i < stringa.size(); i++)
        if (stringa[i+1] == 'e')
            cout << "e presente" << endl;
    return 0;
}
