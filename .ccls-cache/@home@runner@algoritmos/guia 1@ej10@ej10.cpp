#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    int digitos = 0;
    while (num > 0) {
        num /= 10;
        digitos++;
    }
    cout << "El numero tiene " << digitos << " digitos" << endl;
    return 0;
}