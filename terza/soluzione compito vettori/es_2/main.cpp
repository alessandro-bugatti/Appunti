#include <iostream>
#include <cstring>

using namespace std;

//void inverti(int v[], int n)
void inverti(char s[])
{
    int N = strlen(s);
    for (int i = 0; i < N/2; i++)
    {
        char t = s[i];
        s[i] = s[N - i - 1];
        s[N - i - 1] = t;
    }
}

int main()
{
    char s[] = "Ciao a tutti";
    inverti(s);
    cout << s << endl;
    return 0;
}
