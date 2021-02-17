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
