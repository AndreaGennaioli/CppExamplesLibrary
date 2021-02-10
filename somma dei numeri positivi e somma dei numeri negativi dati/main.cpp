#include <iostream>

using namespace std;

int main () {
	int n, numero;
	int somma_positivi = 0,
		index_positivi = 0,
		somma_negativi = 0;

	cout << "Inserire numero di valori: ";
	cin >> n;
	
	for (int index = 0; index < n; index++) {
		cout << "Inserire valore: ";
		cin >> numero;
		
		if (numero >= 0) {
			somma_positivi += numero;
			index_positivi++;
		} else if (numero < 0) {
			somma_negativi += numero;
		}
	}
	
	cout << "Media dei valori positivi inseriti: " << (float)somma_positivi / (float)index_positivi << endl;
	cout << "Somma dei valori negativi inseriti: " << somma_negativi;
}
