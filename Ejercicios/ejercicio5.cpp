#include <iostream>
using namespace std;

int main() {
   int Alumn, nota, aprobados = 0;

   cout << "Ingrese el número de estudiantes: ";
   cin >> Alumn;

   for (int i = 1; i <= Alumn; i++) {
      cout << "Ingrese la calificación del estudiante " << i << ": ";
      cin >> nota;
      if (nota >= 5) {
         aprobados++;
      }
   }

   cout << "El número total de aprobados es: " << aprobados << endl;

   return 0;
}
