#include <stdio.h>
#include <stdlib.h>

int random(int inf, int sup)
{

    int range = sup - inf + 1;
    return rand()%range + inf;
}

int main()
{
    int n,i;
    srand(time(NULL));
    for (i = 0; i < 10; i++){
        n = random(20,50);
        printf("Il numero generato vale: %d\n",n);
    }
    return 0;
}
