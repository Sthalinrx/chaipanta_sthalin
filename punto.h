#ifndef PUNTO_H
#define PUNTO_H
#include <string>
#include <iostream>
using namespace std;

class Punto {
    int x;
    int y;

public:
    Punto();
    Punto(int x, int y);
    int getX() const;
    int getY() const;
    std::string toString() const;
};

#endif // PUNTO_H
