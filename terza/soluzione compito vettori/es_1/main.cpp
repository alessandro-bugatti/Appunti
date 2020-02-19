#include <iostream>

using namespace std;
//int differenza(int v[], int n)
int differenza(char s[])
{
    char massimo = s[0], minimo = s[0];
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] > massimo)
            massimo = s[i];
        if (s[i] < minimo)
            minimo = s[i];
    }
    cout << massimo << " " << minimo << endl;
    cout << (int)massimo << " " << (int)minimo << endl;

    return massimo - minimo;
}

int main()
{
    char s[] = "Ciao a tuttia";
    //s[13] = 'z';
    cout << differenza(s) << endl;
    return 0;
}
