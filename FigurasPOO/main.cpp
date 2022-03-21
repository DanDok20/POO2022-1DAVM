#include <iostream>
#include "View.h"

using namespace std;

void menu(View view){
    int opcion = 0;
    do
    {
        cout << "1.  Agregar un Circulo\n";
        cout << "2.  Agregar un Cuadrado\n";
        cout << "3.  Agregar un Rectangulo\n";
        cout << "4.  Mostrar areas\n";
        cout << "5.  Mostrar perimetros\n";
        cout << "6.  Mostrar suma de areas\n";
        cout << "7.  Mostrar figuras\n";
        cout << "0.  Salir \n";

        cin >> opcion;

        switch (opcion)
        {
            case 1:
                view.agregarCirculo();
                break;
            case 2:
                view.agregarCuadrado();
                break;
            case 3:
                view.agregarRectangulo();
                break;
            case 4:
                view.mostrarAreas();
                break;
            case 5:
                view.mostrarPerimetros();
                break;
            case 6:
                view.mostrarSumaAreas();
                break;
            case 7:
                view.mostrarFiguras();
                break;
            default:
                break;
        }
    } while (opcion != 0);
}

int main() {
    View view;
    view.combinarReferencias();
    menu(view);
    return 0;
}
