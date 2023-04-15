#include <iostream>
using namespace std;

int main() {
   int num, total = 0, cont = 0;

   cout << "Ingrese una lista de números positivos terminada con un número no positivo: ";

   cin >> num;
   if (num > 0) {
      total += num;
      cont++;
      cin >> num;
   } else {
       cout << "No se introdujo un numero positivo";
       return 0;
   }

   if (cont > 0) {
      double media = (double) total / cont;
      cout << "La media de los números ingresados es: " << media << endl;
   } else {
      cout << "No se ingresaron números positivos." << endl;
   }

   return 0;
}