/**
*	Numeri dispari minori del numero dato (partendo  da zero) con ciclo For
*	
*	Autore: Andrea Gennaioli
*	Consegna: realizzare un algoritmo che inserito il numero, restituisce tutti i numeri dispari minori del numero dato (partendo da zero)
*/

#include <iostream>

using namespace std;

int main () {
	int n = 0; // dichiaro e inizializzo la il numero che verr� assegato dall' utente

	cout << "Inserisci numero: "; // stampo in console una frase
	cin >> n; // l'utente inserisce il numero

	for (int numero = 0; numero < n; numero++) { // ciclo for se numero (il cui il valore aumenter� di +1 ad ogni compmento del ciclo) � minore di n (il numero dato dall'utente)
		// dichiaro e inizializzo la variabile numero che utilizzer� come index nel ciclo for
		// al compimento di ongni ciclo la variabile numero cresce di +1

    	if (numero % 2 == 1) { // se il numero � dispari lo stampa in console
        	cout << numero << endl;
    	}
  	
	}

	system("PAUSE"); // blocco la console in modo che non si chiuda al compimento del programma
}
