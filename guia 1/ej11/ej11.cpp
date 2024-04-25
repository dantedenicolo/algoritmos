#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero en base 10: ";
    cin >> num;

    int digitos = 0;
    while (num != 0) {
        num /= 16;
        digitos++;
    }

    cout << "El numero tiene " << digitos << " cifras en base 16." << endl;

    return 0;
}