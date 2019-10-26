#include <iostream>

using namespace std;

int main()
{
    int N, M, S, K;
    cin >> N >> M;
    S = N + M;
    if (S % 2 == 0)
        K = N * M;
    else
        K = N - M;
    cout << S << " " << K << endl;
    return 0;
}
