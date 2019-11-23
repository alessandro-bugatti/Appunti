#include <iostream>
#include <cmath>

using namespace std;

bool secondo_grado(float a, float b, float c,
                   float &x1, float &x2)
{
    if (b*b - 4*a*c < 0)
        return false;
    float r_delta = sqrt (b*b - 4*a*c);
    x1 = (-b + r_delta)/(2*a);
    x2 = (-b - r_delta)/(2*a);
    return true;
}

int main()
{
    float x1 = 3, x2 = 4;
    secondo_grado(3,10,-1,x1,x2);
    cout << x1 << " " << x2 << endl;
    return 0;
}
