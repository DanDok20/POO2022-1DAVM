//
// Created by Admin on 20/03/2022.
//

#ifndef FIGURASPOO_VIEW_H
#define FIGURASPOO_VIEW_H

#include <iostream>
#include <vector>
#include "Figura.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Circulo.h"

using namespace std;

class View {
private:
    vector<Figura*> figurasVector;
public:
    void combinarReferencias();
    void agregarCirculo();
    void agregarCuadrado();
    void agregarRectangulo();
    void mostrarAreas();
    void mostrarPerimetros();
    void mostrarFiguras();
    void mostrarSumaAreas();
};


#endif //FIGURASPOO_VIEW_H
