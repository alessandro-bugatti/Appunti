#include <iostream>

using namespace std;

bool is_prime(int N)
{
    /*
    int i = 2;
    while (N%i++);
    return (N == i)?true:false;
    */
    for (int i = 2; i <= sqrt(N); i++)
        if (N % i == 0)
            return false;
    return true;
}

int main()
{

    return 0;
}
