#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string a, b, c;
    cout << "Operazioni con le stringhe C++" << endl;

    cout << "=== Assegnamento" << endl;
    //Con stringhe costanti
    a = "Ciao";
    cout << a << endl;
    //Tra stringhe C++
    b = a;
    cout << b << endl;
    //Con stringhe C assegnate a stringhe C++
    //MA NON VICEVERSA
    char s[] = "String C";
    b = s; //Ma non s = b;
    cout << b << endl;

    cout << "=== Confronto tra stringhe (==, !=, <, ecc.)" << endl;
    a = "cane";
    b = "pane";
    if (a < b)
        cout << a << " viene prima di " << b << endl;
    else
        cout << b << " viene prima di " << a << endl;

    cout << "=== Lunghezza di una stringa con size()" << endl;
    cout << a << " ha una lunghezza di " << a.size() << " caratteri" << endl;

    cout << "=== Iterazione sui singoli caratteri con []" << endl;
    for (int i = 0; i < b.size(); i++)
        cout << "b[" << i << "] -> " << b[i] << endl;
    cout << "=== Iterazione sui singoli caratteri con at" << endl;
    for (int i = 0; i < b.size(); i++)
        cout << "b[" << i << "] -> " << b.at(i) << endl;

    cout << "=== Utilizzo di empty()" << endl;
    b = "";
    if (b.empty())
        cout << "b vuota" << endl;

    cout << "=== Utilizzo di substring" << endl;
    b = "buonasera";
    a = b.substr(3,4);
    cout << b << " substring(3,4) -> " << a << endl;

    cout << "=== Utilizzo di replace" << endl;
    b = "buonasera";

    cout << b << " replace(4,5, \"giorno\") -> ";
    b.replace(4,5, "giorno");
    cout << b << endl;

    cout << "=== Utilizzo di erase" << endl;
    cout << b << " b.erase(4,3) -> ";
    b.erase(4,3);
    cout << b << endl;

    cout << "=== Utilizzo di find" << endl;
    b = "Il gatto sta dormendo sul tavolo";
    int n = b.find("tavolo", 0);
    cout << "La stringa \"tavolo\" si trova in posizione " <<
        n << " all'interno della stringa \"" << b << "\""<< endl;
    n = b.find("cappero", 0);
    if (n == -1)
        cout << "La stringa \"cappero\" non si trova all'interno della stringa \"" << b << "\""<< endl;

    cout << "=== Utilizzo di find per trovare occorrenze multiple" << endl;
    cout << "La stringa \"ta\" nella stringa \"" << b << "\" si trova nelle seguenti posizioni" << endl;
    n = 0;
    while ( (n = b.find("ta", n)) != -1){
        cout << n << endl;
        n++;
    }

    //Parte per la conversione da un tipo numerico
    //a stringa e viceversa

    cout << "=== Utilizzo di ostringstream" << endl;
    //Questi due sono oggetti che andranno a "sostituire"
    //il cout e il cin, rispettivamente
    //Bisogna includere <sstream>
    ostringstream out;
    istringstream in;
    //variabili che servono per gli esempi
    string stringa;
    int intero;
    float reale;

    //Esempio da un intero a una stringa
    intero = 1234;
    //Travaso il numero dentro l'oggetto che lo trasformerà in stringa
    out << intero;
    //Estraggo la stringa usando il metodo str() e la copio dentro una string
    stringa = out.str();
    cout << "Numero " << intero << " Stringa " <<
    stringa << endl;

    //Stesso esempio con un float
    reale = 12.34;
    //Prima svuoto out
    out.str("");
    //Travaso il numero dentro l'oggetto che lo trasformerà in stringa
    out << reale;
    //Estraggo la stringa usando il metodo str() e la copio dentro una string
    stringa = out.str();
    cout << "Numero " << reale << " Stringa " <<
    stringa << endl;

    cout << "=== Utilizzo di istringstream" << endl;
    //La stringa che contiene un intero
    stringa = "739";
    //Assegno la stringa a in
    //Attenzione che se non contenesse un intero darebbe problemi
    in.str(stringa);
    //Uso in come fosse il cin
    in >> intero;
    cout << "Stringa " << stringa << " Numero " << intero << endl;

    //Stessa cosa con un float
    //La stringa che contiene un intero
    stringa = "56.467";
    //Prima svuoto in
    in.clear();
    //Assegno la stringa a in
    //Attenzione che se non contenesse un float darebbe problemi
    in.str(stringa);
    //Uso in come fosse il cin
    in >> reale;
    cout << "Stringa " << stringa << " Numero " << reale << endl;

    cout << "=== Lettura di una stringa che contiene spazi" << endl;

    //Lettura di una riga completa
    string frase_con_spazi;
    cout << "Inserisci una frase con spazi:";
    getline(cin, frase_con_spazi);
    cout << "Frase inserita: " << endl << frase_con_spazi << endl;
    //ATTENZIONE: la getline rimuove il carattere di a capo dopo
    //aver letto la stringa, mentre la cin lo lascia, quindi
    //fare una cin prima di una getline crea problemi alla lettura
    //quindi sarebbe meglio non mescolarle

    cout << "=== Esempio di problema di cin e getline" << endl;
    cout << "Inserisci un numero intero:";
    cin >> intero;
    cout << "Inserisci una frase: ";
    getline(cin, frase_con_spazi);
    cout << "Numero inserito: " << intero << endl;
    cout << "Frase inserita: " << frase_con_spazi << endl;
    cout << "Come si vede la frase non compare, qua sotto il modo giusto" << endl;

    cout << "=== Esempio di utilizzo corretto di cin e getline" << endl;
    cout << "Inserisci un numero intero:";
    cin >> intero;
    //Bisogna rimuovere il carattere di a capo lasciato dalla cin
    //perchè non dia problemi alla getline
    cin.ignore();
    //Adesso funziona
    cout << "Inserisci una frase: ";
    getline(cin, frase_con_spazi);
    cout << "Numero inserito: " << intero << endl;
    cout << "Frase inserita: " << frase_con_spazi << endl;
    return 0;
}








