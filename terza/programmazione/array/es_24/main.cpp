#include <iostream>

using namespace std;
const int DIM = 5;

// si suppone che v1 e v2 abbiano la stessa dimensione n
int fondi(int v1[], int v2[], int v3[], int n)
{
    int i=0, j=0, k=0;

    while(i < n && j < n)
    {
        if (v1[i] < v2[j])
        {
            v3[k] = v1[i];
            i++;
        }
        else
        {
            v3[k] = v2[j];
            j++;
        }
        k++;
    }
    while(i < n)
    {
        v3[k] = v1[i];
        i++;
        k++;
    }

    while(j < n)
    {
        v3[k] = v2[j];
        j++;
        k++;
    }

    return k;
}


int main()
{
    int v1[DIM],v2[DIM],v3[DIM*2],lunghezza;

v1[0]=0;
v2[0]=5;
    for (int i=1; i<DIM; i++)
    {
        v1[i] = v1[i-1]+rand()%10;
        v2[i] = v2[i-1]+rand()%10;
    }

    lunghezza = fondi(v1,v2,v3,DIM);

    for (int i=0; i<lunghezza; i++)
    {
        cout << v3[i] << endl;
    }


    return 0;
}
