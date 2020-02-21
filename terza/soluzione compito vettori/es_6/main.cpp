#include <iostream>

using namespace std;

int main()
{
    char ascii[128];
    char frase[] = "oggi siamo stati in laboratorio a lavorare.";
    for (int i = 0; i < 128; i++)
        ascii[i] = 0;
    for (int i = 0; frase[i] != '\0'; i++)
        ascii[frase[i]]++;
    int massimo = 0;
    char frequente;
    for (int i = 0; i < 128; i++)
        if (ascii[i] > massimo)
        {
            frequente = i;
            massimo = ascii[i];
        }
    cout << "La lettera che compare più spesso è la "
     << frequente << " che compare " << massimo << " volte";
    return 0;
}
