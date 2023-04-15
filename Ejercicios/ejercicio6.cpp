#include <iostream>
using namespace std;

int main() {
   int Alumn, nota, sobre = 0;

   cout << "Ingrese el número de estudiantes: ";
   cin >> Alumn;

   for (int i = 1; i <= Alumn; i++) {
      cout << "Ingrese la calificación del estudiante " << i << ": ";
      cin >> nota;
      if (nota >= 7 && nota < 9) {
         sobre++;
      }
   }

   cout << "El número total de notas notables es: " << sobre << endl;

   return 0;
}