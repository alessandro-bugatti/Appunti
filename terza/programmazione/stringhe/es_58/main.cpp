#include <iostream>

using namespace std;

bool subString(string s1, int p1, int p2, string& s2)
{
    if (p1 < 0 || p1 > p2 || p1 > s1.size() - 1)
        return false;
    if (p2 < 0 || p2 > s1.size() - 1)
        return false;
    s2 = "";
    for( int i = p1; i <= p2; i++)
        s2 = s2 + s1.at(i);
    cout << "Ho fatto" << endl;
    return true;
}

int main()
{
    string s1, s2;
    s1 = "Superpippicalzelunghe";
    s2 = "ciao";
    bool riuscito = subString(s1, 5, 9, s2);
    if (riuscito)
        cout << s2 << endl;
    else
        cout << "Parametri non corretti" << endl;
    return 0;
}
