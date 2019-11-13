#include <stdio.h>
#include <stdlib.h>


int bisestile(int a)
{
    if (a % 400 == 0)
        return 1;
    if (a % 100 == 0)
        return 0;
    if (a % 4 == 0)
        return 1;
    return 0;
}

int durata_mese(int m, int a)
{
    switch(m)
    {
    case 2:
        return 28 + bisestile(a);
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    default:
        return 31;
    }
}

int durata_anno(int a)
{
    return 365 + bisestile(a);
}

int calcola_giorni(int g, int m, int a)
{
    int giorni = 0;
    int i;
    for (i = 1900; i < a; i++)
        giorni += durata_anno(i);
    for (i = 1; i < m; i++)
        giorni += durata_mese(i, a);
    giorni += g;
    return giorni;
}

int differenza_date(int g1, int m1, int a1,
                    int g2, int m2, int a2)
{
    int giorni1 = calcola_giorni(g1, m1, a1);
    int giorni2 = calcola_giorni(g2, m2, a2);
    return giorni1 - giorni2;
}

int main()
{
    int g1= 2, g2=6, m1= 7, m2=8, a1=2019, a2=2018;
    printf("%d %d\n", bisestile(2000), bisestile(2019));
    printf("%d %d", durata_mese(2,2019), durata_mese(3,2019));
    int differenza;
    differenza = differenza_date(g1, m1, a1, g2, m2, a2);
    printf("\n%d\n", differenza);
    return 0;
}
