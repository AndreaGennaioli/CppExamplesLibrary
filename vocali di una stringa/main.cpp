/**
*	vocali di una stringa
*	
*	Autore: Andrea Gennaioli
*	Consegna: Realizzare un programma che permetta all'utente di inserire un'intera frase. Il programma poi stampa tutte le vocali della frase.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string frase;

	cout << "Inserisci la frase: ";
	getline(cin, frase);

	for (int i = 0; i < frase.length(); i++) {
		if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' ||frase[i] == 'u') {
			cout << frase[i] << " ";
		}
	}

	system("PAUSE");
}
