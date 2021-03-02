/**
*	somma di N numeri con ciclo While
*	
*	Autore: Andrea Gennaioli
*	Consegna: realizzare un algoritmo che faccia la somma di N numeri inseriti da tastiera
*/

#include <iostream>

using namespace std;

int main() {
	int n = 0, numero, somma = 0, index = 0;
	
	cout << "Inserisci il numero di addendi: ";
	cin >> n;
	
	while(index < n) {
		cout << "Inserisci addendo: ";
		cin >> numero;
		somma += numero;
		index++;
	}
	
	cout << somma;
}
