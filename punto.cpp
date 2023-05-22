#include "punto.h"

Punto::Punto() {
    x = 0;
    y = 0;
}

Punto::Punto(int x, int y) {
    this->x = x;
    this->y = y;
}

int Punto::getX() const {
    return x;
}

int Punto::getY() const {
    return y;
}

std::string Punto::toString() const {
    return "(" + to_string(x) + ", " + to_string(y) + ")";
}
