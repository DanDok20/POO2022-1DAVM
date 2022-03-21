
#ifndef FIGURASPOO_FIGURA_H
#define FIGURASPOO_FIGURA_H

#include <iostream>

using namespace std;

class Figura {
protected:
    float area;
public:
    virtual void mostraArea();
    virtual void mostraPerimetro();
    virtual void mostraFigura();
    virtual float getArea();
};


#endif //FIGURASPOO_FIGURA_H
