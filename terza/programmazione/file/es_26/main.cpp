#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream minuscolo("testo.txt");
    if (!minuscolo)
    {
        cout << "Errore" << endl;
        return -1;
    }
    ofstream maiuscolo("maiuscolo.txt");
    if (!maiuscolo)
    {
        cout << "Errore" << endl;
        return -1;
    }

    string s;
    while(minuscolo >> s)
    {
        for (int i = 0; i < s.size(); i++)
            s[i] = s[i] - 'a' + 'A';
        maiuscolo << s << " ";
    }
    minuscolo.close();
    maiuscolo.close();
    return 0;
}
