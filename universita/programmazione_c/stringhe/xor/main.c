#include <stdio.h>
#include <stdlib.h>

void xor(char s[])
{
    int i;
    for (i = 0; s[i] != '\0' ; i++)
        s[i] = s[i] ^ 0xAA;
}

int main()
{
    char s[] = "Ciao a tutti!";
    xor(s);
    printf("%s\n", s);
    xor(s);
    printf("%s\n", s);

    return 0;
}
