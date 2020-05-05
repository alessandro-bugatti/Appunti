#include <iostream>
#include "geometria.h"

using namespace std;

int main()
{
    Punto a = {2.4, 4.4}, b = {6.78, 4.33};
    Punto c = punto_medio(a,b);
    cout << c.x << "  - " << c.y << endl;
    return 0;
}
