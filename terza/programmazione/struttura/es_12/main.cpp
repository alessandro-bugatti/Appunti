#include <iostream>

using namespace std;

struct Allenatore{
    string nome;
    string cognome;
    int titoli_vinti;
};

struct Squadra{
    string nome;
    string colore;
    int punteggio;
    Allenatore allenatore;
};

void stampa_allenatore(Allenatore a)
{
    cout << "Allenatore " << endl;
    cout << "\tNome: " << a.nome << endl;
    cout << "\tCognome: " << a.cognome << endl;
    cout << "\tTitoli vinti: " << a.titoli_vinti << endl;
}

void stampa(Squadra s)
{
    cout << "Squadra" << endl;
    cout << "Nome: " << s.nome << endl;
    cout << "Colore: " << s.colore << endl;
    cout << "Punteggio: " << s.punteggio << endl;
    stampa_allenatore(s.allenatore);
}

void stampa_allenatori_squadre_forti(Squadra s[], int n)
{

}

int allenatori_vincenti(Squadra s[], int n)
{

}

int main()
{
    Squadra fantacalcio[10];
    int numero_squadre = 0;
    fantacalcio[numero_squadre] = {
         "Milan",
         "Rosso-nero",
         32,
         {
             "Giorgio",
             "Pioli",
             0
         }
    };
    numero_squadre++;
    fantacalcio[numero_squadre] = {
         "Inter",
         "Nero-azzurro",
         29,
         {
             "Antonio",
             "Conte",
             6
         }
    };
    numero_squadre++;
    for (int i = 0; i < numero_squadre; i++)
        stampa(fantacalcio[i]);

    return 0;
}
