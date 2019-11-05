#include <stdio.h>
#include <stdlib.h>

int mcm(int m, int n)
{
    int mag, min, i;
    if (m > n)
    {
        mag = m;
        min = n;
    }
    else
    {
        mag = n;
        min = m;
    }
    for (i = 1; i <= mag; i++)
    {
        if (min*i % mag == 0)
            return min*i;
    }
}

int main()
{
    int a = 6, b = 9;
    int m = mcm(a,b);
    printf("Il mcm fra %d e %d risulta %d",
           a, b, m);
    a = 34, b = 23;
    m = mcm(a,b);
    printf("Il mcm fra %d e %d risulta %d",
           a, b, m);
    return 0;
}
