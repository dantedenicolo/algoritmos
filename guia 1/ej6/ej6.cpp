#include <iostream>
using namespace std;

int main() {
    float lado;
    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;
    cout << "El perimetro del cuadrado es: " << lado * 4 << endl;
    cout << "El area del cuadrado es: " << lado * lado << endl;
    return 0;
}