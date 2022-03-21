
#include "View.h"

void View::combinarReferencias(){
    Figura figuraObj;
    Circulo circuloObj;
    Cuadrado cuadradoObj;
    Rectangulo rectanguloObj;
}

void View::agregarCirculo(){
    float radio;
    cout << "Digita el radio del circulo: \n:";
    cin >> radio;
    Circulo circulo(radio);
    figurasVector.push_back(new Circulo(circulo));
}
void View::agregarCuadrado(){
    float lado;
    cout << "Digita el lado del cuadrado: \n:";
    cin >> lado;
    Cuadrado cuadrado(lado);
    figurasVector.push_back(new Cuadrado(cuadrado));
}
void View::agregarRectangulo(){
    float base, altura;
    cout << "Digita la base del rectangulo: \n:";
    cin >> base;
    cout << "Digita la altura del rectangulo: \n:";
    cin >> altura;
    Rectangulo rectangulo(base, altura);
    figurasVector.push_back(new Rectangulo(rectangulo));
}
void View::mostrarAreas(){
    for (int i=0; i<figurasVector.size(); i++){
        figurasVector[i]->mostraArea();
    }
}
void View::mostrarPerimetros(){
    for (int i=0; i<figurasVector.size(); i++){
        figurasVector[i]->mostraPerimetro();
    }
}
void View::mostrarFiguras(){
    for (int i=0; i<figurasVector.size(); i++){
        figurasVector[i]->mostraFigura();
    }
}
void View::mostrarSumaAreas(){
    float sumaAreas = 0;
    for (int i=0; i<figurasVector.size(); i++){
        sumaAreas += figurasVector[i]->getArea();
    }
    cout << "La suma de todas las areas es: " << sumaAreas << "\n";
}