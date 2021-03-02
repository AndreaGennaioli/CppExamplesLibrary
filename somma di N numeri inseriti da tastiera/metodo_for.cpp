/**
*	somma di N numeri con ciclo For
*	
*	Autore: Andrea Gennaioli
*	Consegna: realizzare un algoritmo che faccia la somma di N numeri inseriti da tastiera
*/

#include <iostream>

using namespace std;

int main() {
	int n = 0, numero, somma = 0;
	
	cout << "Inserisci il numero di addendi: ";
	cin >> n;
	
	for(int index = 0; index < n; index++) {
		cout << "Inserisci addendo: ";
		cin >> numero;
		somma += numero;
	}
	
	cout << somma;
}
