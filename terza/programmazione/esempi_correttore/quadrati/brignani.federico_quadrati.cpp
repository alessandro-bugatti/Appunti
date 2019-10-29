#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N >= 0)
    {
        for (int i = 0; i < N; i++)
        {
            for (int i = 0; i < N; i++)
            {
                cout << "x";
            }
            cout << endl;
        }
    }
    else
        if (N%2 == 0)
        {
            N = -N;
            for (int i = 0; i < N; i++)
            {
                cout << "x";
            }
            for (int i = 0; i < N-2; i++)
            {
                cout << endl;
                cout << "x";
                for (int i = 0; i < N-2; i++)
                {
                    cout << " ";
                }
                cout << "x";
            }
            cout << endl;
            for (int i = 0; i < N; i++)
            {
                cout << "x";
            }
        }
        else
        {
            N = -N;
            int s = N/2;
            int x = 1;
            while (s > 0)
            {
                for (int i = 0; i < s; i++)
                {
                    cout << " ";
                }
                for (int i = 0; i < x; i++)
                {
                    cout << "x";
                }
                cout << endl;
                s -= 1;
                x += 2;
            }
            for (int i = 0; i < N; i++)
            {
                cout << "x";
            }
            cout << endl;
            while (s < N/2)
            {
                s += 1;
                x -= 2;
                for (int i = 0; i < s; i++)
                {
                    cout << " ";
                }
                for (int i = 0; i < x; i++)
                {
                    cout << "x";
                }
                cout << endl;
            }
        }
    return 0;
}
