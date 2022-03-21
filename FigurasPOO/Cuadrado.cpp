#include "Cuadrado.h"

Cuadrado::Cuadrado(){
    lado = 0;
    area = 0;
}
Cuadrado::Cuadrado(float lado){
    this->lado = lado;
}
void Cuadrado::mostraArea(){
    float areaCuadrado = lado*lado;
    area = areaCuadrado;
    cout << "Cuadrado: " << lado << "x" << lado << "\n";
    cout << "El area del cuadrado es: " << areaCuadrado << "\n\n";
}
void Cuadrado::mostraPerimetro(){
    float perimetroCuadrado = lado*4;
    cout << "Cuadrado: " << lado << "x" << lado << "\n";
    cout << "El perimetro del cuadrado es: " << perimetroCuadrado << "\n\n";
}
void Cuadrado::mostraFigura(){
    cout << "Figura del cuadrado: " << lado << "x" << lado << "\n\n";
    for (int i = 1; i <= lado; i++) {
        for (int j = 1; j <= lado; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

float Cuadrado::getArea(){
    return this->area;
}

