#include <iostream>
#include <fstream>

using namespace std;

/*
    Per tutti i file abbiamo almeno tre operazioni:
    1) Apertura
    2) Lettura/scrittura
    3) Chiusura
*/

int main()
{
    //Gestione file con contatore
    ifstream in("contatore.txt"); //Apro un file di input

    //Controllo sull'apertura
    if (!in)
    {
        //Reazione all'errore
       cout << "Errore nell'apertura del file" << endl;
       return 0;
    }
    //Fase di lettura modalità con contatore
    int n, m;
    //Leggo il contatore all'inizio del file
    cout << "Modalita' con contatore" << endl;
    in >> n ;
    //Leggo gli n numeri
    for (int i = 0; i < n; i++)
    {
        in >> m;
        cout << m << endl;
    }
    in.close();//Chiude il file

    //Gestione file fino alla fine
    ifstream in2("completo.txt"); //Apro un file di input

    //Controllo sull'apertura
    if (!in2)
    {
        //Reazione all'errore
       cout << "Errore nell'apertura del file" << endl;
       return 0;
    }
    //Fase di lettura modalità fino alla fine

    cout << "Modalita' fino alla fine" << endl;

    //Leggo tutto il contenuto
    while(in2 >> m)
        cout << m << endl;


    //Gestione file fino alla fine con valori di tipo diverso
    ifstream in3("interi_float.txt"); //Apro un file di input

    //Controllo sull'apertura
    if (!in3)
    {
        //Reazione all'errore
       cout << "Errore nell'apertura del file" << endl;
       return 0;
    }
    //Fase di lettura modalità fino alla fine

    cout << "Modalita' fino alla fine con interi e reali" << endl;
    int intero;
    float reale;
    //Leggo tutto il contenuto
    while(in3 >> intero >> reale)
        cout << intero << " " << reale << endl;

    //Gestione file fino alla fine senza struttura
    ifstream in4("senza_struttura.txt"); //Apro un file di input

    //Controllo sull'apertura
    if (!in4)
    {
        //Reazione all'errore
       cout << "Errore nell'apertura del file" << endl;
       return 0;
    }
    //Fase di lettura modalità fino alla fine

    cout << "Modalita' fino alla fine senza struttura interna" << endl;
    string s;
    //Leggo tutto il contenuto
    while(in4 >> s)
        cout << s << endl;


    return 0;
}
