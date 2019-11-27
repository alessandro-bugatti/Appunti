#include <stdio.h>
#include <stdlib.h>

//Si suppone che i due vettori da fondere
//abbiano la stessa lunghezza
void fusione(int r[], int s[], int n, int t[])
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    while (i < n && j < n)
    {
        if (r[i] < s[j])
        {
            t[k] = r[i];
            i++;
        }
        else
        {
            t[k] = s[j];
            j++;
        }
        k++;
    }
    while(i < n)
    {
        t[k] = r[i];
        i++;
        k++;
    }
    while(j < n)
    {
        t[k] = s[j];
        j++;
        k++;
    }
}

int main()
{
    int r[] = {2,5,7,9,12,21};
    int s[] = {4,5,6,23,34,44};
    int n = sizeof(r)/sizeof(int);
    int t[n*2],i;
    fusione(r,s,n,t);
    for (i = 0; i < n*2 ; i++)
        printf("%d ", t[i]);
    return 0;
}
