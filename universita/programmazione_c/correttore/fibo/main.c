#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if (n == 1 || n ==2)
        return 1;
    int i, f_n_1, f_n_2, f_n;
    f_n_1 = 1;
    f_n_2 = 1;
    for (i = 3; i <= n; i++)
    {
        f_n = f_n_1 + f_n_2;
        f_n_2 = f_n_1;
        f_n_1 = f_n;
    }
    return f_n;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    return 0;
}
