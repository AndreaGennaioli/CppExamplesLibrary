/**
*	moltiplicazione alternativa con ciclo While
*	
*	Autore: Andrea Gennaioli
*	Consegna: relizzare un algoritmo che usi la somma per fare moltiplicazioni
*/

#include <iostream>

using namespace std;

int main() {
	int numero, moltiplicatore, somma = 0, index = 0;
	cout << "Inserire il numero da moltiplicare: ";
	cin >> numero;
	
	cout << "Inserire il moltiplicatore: ";
	cin >> moltiplicatore;

	while(index < moltiplicatore) {
		somma += numero;
		index++;
	}
	
	cout << somma;
}
