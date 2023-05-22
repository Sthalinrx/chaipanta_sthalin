#ifndef LINEA_H
#define LINEA_H
#include "punto.h"


class Linea {
    static int NUM_LINEAS;
    Punto* p1;
    Punto* p2;
    float distancia;
    float pendiente;

public:
    Linea();
    Linea(Punto* punto1, Punto* punto2);
    ~Linea();
    std::string toString() const;
    void calcularDistancia();
    void calcularPendiente();
    void imprimirDatos() const;
};

#endif // LINEA_H
