/**
*	Numeri dispari minori del numero dato (partendo  da zero) con ciclo While
*	
*	Autore: Andrea Gennaioli
*	Consegna: realizzare un algoritmo che inserito il numero, restituisce tutti i numeri dispari minori del numero dato (partendo da zero)
*/

#include <iostream>

using namespace std;

int main () {
	int n = 0; // dichiaro e inizializzo la il numero che verr� assegato dall' utente
	int numero = 0; // dichiaro e inizializzo il numero a qui assegner� valori in modo crescente +1 all'interno del while riga 12 

	cout << "Inserisci numero: "; // stampo in console una frase
	cin >> n; // l'utente inserisce il numero

	while (numero < n) { // ciclo while se numero (il cui il valore aumenter� di +1 ad ogni compmento del ciclo) � minore di n (il numero dato dall'utente)

    	if (numero % 2 == 1) { // se il numero � dispari lo stampa in console
        	cout << numero << endl;
    	}
    	
    	numero++; // la variabile numero cresce di +1
	}
	
	system("PAUSE"); // blocco la console in modo che non si chiuda al compimento del programma
}
