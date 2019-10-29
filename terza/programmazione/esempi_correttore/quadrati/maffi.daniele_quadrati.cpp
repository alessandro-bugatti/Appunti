#include <iostream>

using namespace std;

int main()
{
    int N, lato = 0, area = 1;
    cin >> N;
    if (N >= 0)
    {
        for (int i = 0; i < N; i++)
        {
            for (int n = 0; n < N; n++)
                cout << "x";
            cout << "\n";
        }
    }
    else if (N % 2 == 0)
    {
        N = N * -1;
        while (lato != N)
        {
            lato = lato + 1;
            if (lato == 1 || lato == N)
            {
                for (int i = 0; i < N; i++)
                    cout << "x";
            }
            else
            {
                cout << "x";
                for (int i = 0; i < N - 2; i++)
                    cout << " ";
                cout << "x";
            }
            cout << "\n";
        }
    }
    else
    {
        N = N * -1;
        lato = (N - 1)/2;
        for (int i = 0; i < (N-1)/2; i++)
        {
            for (int n = 0; n < lato; n++)
                cout << " ";
            for (int m = 0; m < area; m++)
                cout << "x";
            lato = lato - 1;
            area = area + 2;
            cout << "\n";
        }
        for (int i = 0; i< N; i++)
            cout << "x";
        cout << "\n";
        area = N - 2;
        lato = 1;
        for (int i = 0; i < N - 2; i++)
        {
            for (int n = 0; n < lato; n++)
                cout << " ";
            for (int m = 0; m < area; m++)
                cout << "x";
            lato = lato + 1;
            area = area - 2;
            cout << "\n";
        }
    }
    return 0;
}
