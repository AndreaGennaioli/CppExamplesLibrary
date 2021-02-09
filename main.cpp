#include <iostream>

using namespace std;

int main() {
      int n = 0;
      int numero = 0;

      cout << "inserisci numero: ";
      cin >> n;

      while(numero < n) {

          if(numero % 2 == 1)    {
              cout << numero << endl;
          }

          numero = numero + 1;    
      }
}
