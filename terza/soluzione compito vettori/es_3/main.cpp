#include <iostream>
#include <cstring>

using namespace std;

int conta_occorrenze(char frase[], char cercata[])
{
    int n = strlen(cercata);
    int len = strlen(frase);
    int conta = 0;
    for (int i = 0; i <= len - n; i++)
    {
        bool trovata = true;
        for (int j = 0; j < n; j++)
            if (cercata[j] != frase[i + j])
                trovata = false;
        if (trovata)
            conta++;
    }
    return conta;
}

int main()
{
    char frase[] = "casa album casa vecchio mobile";
    char c1[] = "casa";
    char c2[] = "vecchio";
    char c3[] = "armadio";
    cout << conta_occorrenze(frase, c1) << endl;
    cout << conta_occorrenze(frase, c2) << endl;
    cout << conta_occorrenze(frase, c3) << endl;
    return 0;
}
