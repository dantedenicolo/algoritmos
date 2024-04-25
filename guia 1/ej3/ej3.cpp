#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese otro numero: ";
    cin >> b;
    swap(a, b);
    cout << "El primer numero es: " << a << endl;
    cout << "El segundo numero es: " << b << endl;
    return 0;
}