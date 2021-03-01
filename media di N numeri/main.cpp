/**
*	Media di N numeri dati
*	
*	Autore: Andrea Gennaioli
*	Consegna: calcolare la media di N numeri dati dall'utente.
*/

#include <iostream>

using namespace std;

int main() {
	int n, numero; 
	float somma = 0;

	cout << "Inserire il numero di valori: ";
	cin >> n;

	for(int index = 0; index < n; index++) {
		cout << index+1 << "> ";
		cin >> numero;
		somma += numero;
	}

	cout << "\n\nMedia: " << (float) somma/n;
}
