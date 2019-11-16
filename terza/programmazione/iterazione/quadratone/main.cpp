#include <iostream>

using namespace std;

void quadratone(int lato, char c)
{
    for(int i = 0; i < lato; i++)
    {
        for (int j = 0; j < lato; j++)
            cout << c;
        cout << endl;
    }
}

int main()
{
    quadratone(6,'h');
    return 0;
}
