#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;
    cout << "Orden en el que se ingresaron los numeros: " << a << " " << b << " " << c << endl;
    cout << "Orden de menor a mayor: ";
    int arr[3] = {a,b,c};
    sort(arr, arr+3);
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    return 0;
}