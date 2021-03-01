/**
*	Somma Prodotto e Media di N numeri
*	
*	Autore: Andrea Gennaioli
*	Consegna: calcolare la somma, il prodotto e la media di N numeri dati dall'utente.
*/

#include <iostream>

using namespace std;

int main() {
	int n, numero; 
	float somma = 0, prodotto = 1;
	
	cout << "Inserire il numero di valori: ";
	cin >> n;
	
	for(int index = 0; index < n; index++) {
		cout << index+1 << "> ";
		cin >> numero;
		somma += numero;
		prodotto *= numero;
	}
	
	cout << "\n\nSomma: " << somma << "\nProdotto: " << prodotto << "\nMedia: " << (float) somma/n;
}
