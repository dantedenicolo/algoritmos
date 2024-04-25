#include <iostream>
using namespace std;

int main() {
    float num;
    while (num != 0) {
        cout << "Ingrese un numero: ";
        cin >> num;
        cout << "El numero ingresado es " << (num < 0 ? "negativo" : "positivo") << endl;
    }
    return 0;
}