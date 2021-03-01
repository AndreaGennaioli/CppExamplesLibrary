/**
*	da lire a euro
*	
*	Autore: Andrea Gennaioli
*	Consegna: Realizzare un convertitore, ad esempio lire/euro.
*/

#include <iostream>

using namespace std;

int main() {
	float lire;
	float euro;

	cout << "Inserisci lire: ";
	cin >> lire;

	euro = lire / 2000;
	cout << lire << " equivalgono a: " << euro << " euro";

	system("PAUSE");
}
