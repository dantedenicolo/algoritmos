#include <iostream>
using namespace std;


int main() {
    enum dias {Lunes=1, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};
    
    int input;
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> input;
    switch (input) {
        case Lunes:
            cout << "Lunes" << endl;
            break;
        case Martes:
            cout << "Martes" << endl;
            break;
        case Miercoles:
            cout << "Miercoles" << endl;
            break;
        case Jueves:
            cout << "Jueves" << endl;
            break;
        case Viernes:
            cout << "Viernes" << endl;
            break;
        case Sabado:
            cout << "Sabado" << endl;
            break;
        case Domingo:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Dia incorrecto" << endl;
    }
    return 0;
}