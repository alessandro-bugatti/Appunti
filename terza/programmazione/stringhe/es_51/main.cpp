#include <iostream>
#include <cstring>

using namespace std;

int trova_cpp(string s1, string s2)
{
    //Trova la lunghezza delle due stringhe
    int n1 = s1.size(); //strlen(s1);
    int n2 = s2.size();

    //scorro tutta s1
    for (int i = 0; i < n1 - n2 + 1; i++)
    {
        bool trovata = true;
        //scorro s2
        for(int j = 0; j < n2; j++)
            if (s1.at(i + j) != s2.at(j)) //n1 - 1
                trovata = false;
        if (trovata == true)
            return i;
    }
    return -1;
}


int trova_c(char s1[], char s2[])
{
    //Trova la lunghezza delle due stringhe
    int n1 = strlen(s1);
    int n2 = strlen(s2);

    //scorro tutta s1
    for (int i = 0; i < n1 - n2 + 1; i++)
    {
        bool trovata = true;
        //scorro s2
        for(int j = 0; s2[j] != '\0'; j++)
            if (s1[i + j] != s2[j]) //n1 - 1
                trovata = false;
        if (trovata == true)
            return i;
    }
    return -1;
}

int main()
{
    const int DIM = 100;
    char s1[DIM], s2[DIM];
    cout << "Inserisci la prima stringa: ";
    cin >> s1;
    cout << "Inserisci la seconda stringa: ";
    cin >> s2;

    int risultato = trova_c(s1, s2);

    cout << risultato << endl;
    //Stringhe C++
    string str1, str2;
    cout << "Inserisci la prima stringa: ";
    cin >> str1;
    cout << "Inserisci la seconda stringa: ";
    cin >> str2;

    risultato = trova_cpp(str1, str2);

    cout << risultato << endl;

    return 0;
}
