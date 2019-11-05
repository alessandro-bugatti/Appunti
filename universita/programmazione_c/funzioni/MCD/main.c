#include <stdio.h>
#include <stdlib.h>
/*
int MCD(int a, int b)
{
    int temp, i;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (i = a; i > 0; i--)
        if (a%i == 0 && b%i == 0)
            return i;
}*/

int MCD(int a, int b)
{
    int temp, i;
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while (a%b != 0)
    {
        int resto = a%b;
        a = b;
        b = resto;
    }
    return b;
}

int main()
{
    int a = 18, b = 24;
    printf("Il MCD tra %d e %d vale %d",
           a, b, MCD(a, b));
    return 0;
}
