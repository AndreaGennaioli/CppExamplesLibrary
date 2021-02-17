#include <iostream>

using namespace std;

int main () {
	int n = 0; // dichiaro e inizializzo la il numero che verrà assegato dall' utente

	cout << "Inserisci numero: "; // stampo in console una frase
	cin >> n; // l'utente inserisce il numero

	for (int numero = 0; numero < n; numero++) { // ciclo for se numero (il cui il valore aumenterà di +1 ad ogni compmento del ciclo) è minore di n (il numero dato dall'utente)
		// dichiaro e inizializzo la variabile numero che utilizzerò come index nel ciclo for
		// al compimento di ongni ciclo la variabile numero cresce di +1

    	if (numero % 2 == 1) { // se il numero è dispari lo stampa in console
        	cout << numero << endl;
    	}
  	
	}

	system("PAUSE"); // blocco la console in modo che non si chiuda al compimento del programma
}
