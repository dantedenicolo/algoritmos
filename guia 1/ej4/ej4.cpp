#include <iostream>
using namespace std;

int main() {
    int bultos, cantidad_por_caja;
    cout << "Ingrese la cantidad de bultos: ";
    cin >> bultos;
    cout << "Ingrese la cantidad de bultos por caja: ";
    cin >> cantidad_por_caja;
    int cajas = bultos / cantidad_por_caja;
    int sobrante = bultos % cantidad_por_caja;
    cout << "La cantidad de cajas es: " << cajas << endl;
    cout << "La cantidad de bultos sobrantes es: " << sobrante << endl;
    return 0;
}