#include <iostream>

using namespace std;

int main()
{
    char stringhe[3][20];

    cin >> stringhe[0];
    cin >> stringhe[1];
    cin >> stringhe[2];

    for (int i = 0; i < 3; i++)
        cout << stringhe[i] << endl;

    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 20; j++)
        cout << (int)stringhe[i][j] << " ";
      cout << endl;

    }

    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 20; j++)
        cout << stringhe[i][j] << " ";
      cout << endl;
    }
    return 0;
}
