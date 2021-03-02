/**
*	moltiplicazione alternativa con ciclo For
*	
*	Autore: Andrea Gennaioli
*	Consegna: relizzare un algoritmo che usi la somma per fare moltiplicazioni
*/

#include <iostream>

using namespace std;

int main() {
	int numero, moltiplicatore, somma = 0;
	cout << "Inserire il numero da moltiplicare: ";
	cin >> numero;
	
	cout << "Inserire il moltiplicatore: ";
	cin >> moltiplicatore;

	for(int index = 0; index < moltiplicatore; index++) {
		somma += numero;	
	}
	
	cout << somma;
}
