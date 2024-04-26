
#include <iostream>

using namespace std;

int main() {
  unsigned long totalArroz = 1;
  unsigned long arrozEnCasillero = 1;
  for (int casillero = 2; casillero <= 64; casillero++) {
      arrozEnCasillero *= 2;
      totalArroz += arrozEnCasillero;
  }

  cout << "Total de granos de arroz en el tablero: " << totalArroz << endl;

  return 0;
}
