#include <iostream>
using namespace std;

int main() {
    float a,b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << ((a > b) ? a : b) << endl;
    return 0;
}