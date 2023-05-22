#include <iostream>
#include <math.h>
#include "linea.h"
#include "punto.h"

using namespace std;


int main() {
    Punto* punto1 = new Punto(-7, 4);
    Punto* punto2 = new Punto(2, 9);

    Linea* linea1 = new Linea(punto1, punto2);
    cout<<"\n";

    linea1->imprimirDatos();



    return 0;
}
