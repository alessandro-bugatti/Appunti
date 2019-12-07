#include <stdio.h>
#include <stdlib.h>

int my_strlen(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++);
    return i;
}

void my_strncpy(char dest[], char src[], int num)
{
    int i;
    for (i = 0; src[i] != '\0' && i < num; i++)
        dest[i] = src[i];
    if (i < num)
        dest[i] = '\0';

}

int main()
{
    char s[] = "\"stringa di prova\"";
    char d[100];
    printf("Lunghezza di %s: %d\n", s, my_strlen(s));
    printf("Lunghezza di %s: %d\n", s, strlen(s));
    my_strncpy(d, s, 10);
    printf("Stringa copiata: %s\n", d);
    return 0;
}



