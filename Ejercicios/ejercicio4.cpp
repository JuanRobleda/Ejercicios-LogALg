#include <iostream>
using namespace std;

int main() {
   bool Primo;
   for (int num = 2; num <= 1000; num++) {
      Primo = true;
      for (int i = 2; i <= num / 2; i++) {
         if (num % i == 0) {
            esPrimo = false;
            break;
         }
      }
      if (Primo) {
         cout << num << " ";
      }
   }
   cout << endl;
   return 0;
}