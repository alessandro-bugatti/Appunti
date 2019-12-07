#include <stdio.h>
#include <stdlib.h>



int main()
{
    //Esempi di istruzioni non valide per le stringhe
    int a = 5;
    int b;
    b = a;
    char s[] = "Ciao a tutti";
    char t[100];
    t = s; //NO, non valida
    if (t < s) //NO, non valida
        {

        }
    a = a + b;
    s = s + t; //NO, non valida
    strcpy(t,s);
    return 0;
}
