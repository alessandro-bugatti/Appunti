#include <stdio.h>
#include <stdlib.h>

int maggiore(int a, int b)
{
    int m = 0;
    if (a > b)
        m = a;
    else
        m = b;
    return m;
}

int main()
{
    int n = 688, m = 1112;
    int mag = maggiore(n, m);
    printf("Il maggiore vale: %d\n",mag);
    return 0;
}
