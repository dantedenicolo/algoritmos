#include <iostream>
using namespace std;

int main() {
    float angulo1, angulo2;
    cout << "Ingrese un angulo: ";
    cin >> angulo1;
    cout << "Ingrese otro angulo: ";
    cin >> angulo2;
    float angulo3 = 180 - angulo1 - angulo2;
    cout << "El tercer angulo es: " << angulo3 << endl;
    return 0;
}