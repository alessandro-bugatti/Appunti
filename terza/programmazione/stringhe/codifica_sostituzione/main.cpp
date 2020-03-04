#include <iostream>

using namespace std;

void cifra(char chiaro[], char chiave[], char cifrato[])
{
    int i;
    for (i = 0; chiaro[i] != '\0'; i++)
        cifrato[i] = chiave[chiaro[i] - 'a'];
    cifrato[i] = '\0';
}

int main()
{
    char chiave[] = "qwrtyuioplekjhgfdsazxcvbnm";
    char testo[] = "domaniattacchiamoallalba";
    char cifrato[1000];
    cifra(testo, chiave, cifrato);
    cout << "La stringa in chiaro era: " << endl
        << testo << endl;
    cout << "La stringa cifrata diventa: " << endl
        << cifrato << endl;
    return 0;
}
