#include "linea.h"

#include <math.h>
int Linea::NUM_LINEAS = 0;

Linea::Linea() {
    p1 = nullptr;
    p2 = nullptr;
    NUM_LINEAS++;
}

Linea::Linea(Punto* punto1, Punto* punto2) {
    p1 = punto1;
    p2 = punto2;
    NUM_LINEAS++;
    calcularDistancia();
    calcularPendiente();
}

Linea::~Linea() {
    delete p1;
    delete p2;
}

std::string Linea::toString() const {
    std::string lineaString = "L" + to_string(NUM_LINEAS) + " [ P" + p1->toString() + " - P" + p2->toString() + ", d = " + std::to_string(distancia) + ", m = " + std::to_string(pendiente) + " ]";
    return lineaString;
}

void Linea::calcularDistancia() {
    distancia = std::sqrt(std::pow(p2->getX() - p1->getX(), 2) + std::pow(p2->getY() - p1->getY(), 2));
}

void Linea::calcularPendiente() {
    pendiente = static_cast<float>(p2->getY() - p1->getY()) / (p2->getX() - p1->getX());
}

void Linea::imprimirDatos() const {
    std::cout << toString() << std::endl;
}
