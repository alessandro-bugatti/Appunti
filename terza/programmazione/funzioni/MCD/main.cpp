#include <iostream>

using namespace std;

int MCD(int m, int n)
{
    int r = m%n;
    while (r!=0)
    {
        m=n;
        n=r;
        r = m%n;
    }
    return n;
}


int main()
{
    cout << MCD (28,MCD(34,566)) << endl;
    return 0;
}




