#include "geometria.h"

Punto punto_medio(Punto a, Punto b)
{
    Punto c;
    c.x = (a.x + b.x)/2;
    c.y = (a.y + b.y)/2;
    return c;
}
