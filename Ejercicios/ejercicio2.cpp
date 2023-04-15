#include <iostream>
#include <string>

using namespace std;

int main() {
   string mes;
   int anio, dias;

   cout << "Dime el nombre de un mes: ";
   cin >> mes;

   cout << "dime el año: ";
   cin >> anio;

   if (mes == "enero" || mes == "marzo" || mes == "mayo" || mes == "julio" || mes == "agosto" || mes == "octubre" || mes == "diciembre") {
      dias = 31;
   } else if (mes == "abril" || mes == "junio" || mes == "septiembre" || mes == "noviembre") {
      dias = 30;
   } else if (mes == "febrero") {
      if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
         dias = 29;
      } else {
         dias = 28;
      }
   } else {
      cout << "no se ingreso un mes" << endl;
      return 1;
   }

   cout << "El número de días del mes de " << mes << " del año " << anio << " es: " << dias << endl;

   return 0;
}