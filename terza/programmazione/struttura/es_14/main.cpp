#include <iostream>

using namespace std;

struct Voto{
    string materia;
    int voto;
};

struct Studente{
    string nome;
    string cognome;
    char sesso; //M o F
    int anno_di_nascita;
    Voto voti[20];
    int materie;
};
//Si suppone che ogni studente nel vettore dei voti
//abbia i voti delle stesse materie nello stesso ordine
//quindi ad esempio tutti gli studenti hanno come prima
//materia Italiano, come seconda Matematica ecc.
string mediaPiuAlta(Studente s[], int n)
{
    int numero_materie = s[0].materie;
    float media_max = -1;
    string materia;
    //Ciclo per le materie
    for (int i = 0; i < numero_materie; i++)
    {
        float media = 0;
        //Ciclo sugli studenti
        for (int j = 0; j < n; j++)
        {
            media += s[j].voti[i].voto;
        }
        media /= n;
        //Se la materia corrente ha una media più alta di
        //quella maggiore trovata finora, viene aggiornata
        //la media massima e si memorizza il nome della materia
        if (media > media_max)
        {
            media_max = media;
            materia = s[0].voti[i].materia;
        }
    }
    return materia;
}

int main()
{
    //Da completare
    Studente studenti[30];
    int n_studenti = 0;
    studenti[n_studenti] =
    {
        "Matteo",
        "Olivari",
        'M',
        2003,
        {
            {"Italiano",9},
            {"Matetica",7},
            {"Inglese",8}
        },
        3
    };
    n_studenti++;
    cout << mediaPiuAlta(studenti,n_studenti) << endl;
    return 0;
}
