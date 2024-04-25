#include <iostream>

using namespace std;

int main() {
    unsigned long long totalArroz = 0;

    for (int casillero = 1; casillero <= 64; casillero++) {
        unsigned long long arrozEnCasillero = 1ULL << (casillero - 1);
        totalArroz += arrozEnCasillero;
    }

    cout << "Total de granos de arroz en el tablero: " << totalArroz << endl;

    return 0;
}
