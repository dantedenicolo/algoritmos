#include <iostream>
using namespace std;

int main() {
    float lado1, lado2, lado3;
    cout << "Ingrese el lado 1 del triangulo: ";
    cin >> lado1;
    cout << "Ingrese el lado 2 del triangulo: ";
    cin >> lado2;
    cout << "Ingrese el lado 3 del triangulo: ";
    cin >> lado3;
    if (lado1 == lado2 && lado2 == lado3) {
        cout << "El triangulo es equilatero" << endl;
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        cout << "El triangulo es isosceles" << endl;
    } else {
        cout << "El triangulo es escaleno" << endl;
    }
    return 0;
}