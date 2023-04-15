#include <iostream>

using namespace std;

int main() {
   int num, total = 0, cont = 0;

   cout << "Dame lista de numeros positivos y que sean seguidos de un numero negativo: ";

   cin >> num;
   if (num >= 0) {
      total += num;
      cont++;
      cin >> num;
   } else {
       
       std::cout << "No se inserto un numero correcto" << std::endl;

    
   }

   if (cont > 0) {
      double media = (double) total / cont;
      cout << "La media es: " << media << endl;
   } else {
      cout << "No se ingresaron numeros positivos" << endl;
   }

   return 0;
}