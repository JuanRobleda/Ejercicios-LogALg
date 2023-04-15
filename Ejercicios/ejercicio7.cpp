#include <iostream>
using namespace std;

int main() {
   const int NUM_NUMEROS = 100;
   int numero, numPositivos = 0, numNegativos = 0;
   double sumaPositivos = 0.0, sumaNegativos = 0.0;

   for (int i = 1; i <= NUM_NUMEROS; i++) {
      cout << "Ingrese el número " << i << ": ";
      cin >> numero;
      if (numero >= 0) {
         numPositivos++;
         sumaPositivos += numero;
      } else {
         numNegativos++;
         sumaNegativos += numero;
      }
   }

   double mediaPositivos = sumaPositivos / numPositivos;
   double mediaNegativos = sumaNegativos / numNegativos;

   cout << "La media de los números positivos es: " << mediaPositivos << endl;
   cout << "La media de los números negativos es: " << mediaNegativos << endl;

   return 0;
}
