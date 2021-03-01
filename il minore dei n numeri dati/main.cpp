/**
*	il minore dei n numeri dati
*	
*	Autore: Andrea Gennaioli
*	Consegna: relizzare un algoritmo che inseriti n numeri, 
*		calcoli il minore e restituisca la posizione, 
*		o meglio se il minore è il primo numero mi restituisce che nella prima posizione,
*		se è secondo nella seconda posizione e così via 
*/

#include <iostream>

using namespace std;

int main() {
	int n, numero, index = 0, last = NULL;
	
	cout << "Inserire il numero di numeri: ";
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cout << "inserire il numero: ";
		cin >> numero;
		if(last == NULL) last = numero;
		else if(numero < last) {
			last = numero;
			index = i+1;
		}
	}
	cout << "\n\nIl numero minore di tutti e': " << last << "\nA posizione: " << index;
}