//
// Created by Admin on 20/03/2022.
//

#ifndef FIGURASPOO_RECTANGULO_H
#define FIGURASPOO_RECTANGULO_H

#include "Figura.h"

class Rectangulo : public Figura {
private:
    float base;
    float altura;
public:
    Rectangulo();
    Rectangulo(float base, float altura);
    void mostraArea();
    void mostraPerimetro();
    void mostraFigura();
    float getArea();
};


#endif //FIGURASPOO_RECTANGULO_H
