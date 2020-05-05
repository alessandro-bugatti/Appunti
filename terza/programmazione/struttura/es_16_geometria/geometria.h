#ifndef GEOMETRIA_H_INCLUDED
#define GEOMETRIA_H_INCLUDED

struct Punto{
    double x;
    double y;
};

struct Cerchio{
    Punto centro;
    double raggio;
};

struct Retta{
    double m; //Coefficiente angolare
    double q; //Intercetta
};

/**
    Funzione che calcola il punto medio tra due punti
*/
Punto punto_medio(Punto a, Punto b);

#endif // GEOMETRIA_H_INCLUDED
