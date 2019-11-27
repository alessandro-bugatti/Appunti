#include <stdio.h>
#include <stdlib.h>

void selection_sort(int v[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        int ind_min = i;
        for (j = i + 1; j < n; j++)
            if (v[j] < v[ind_min])
                ind_min = j;
        int temp = v[i];
        v[i] = v[ind_min];
        v[ind_min] = temp;
    }
}

int main()
{
    int i, v[] = {5,56,4,99,17};
    selection_sort(v + 1, 2);
    for (i = 0; i < 5; i++)
        printf("%d ", v[i]);
    return 0;
}



