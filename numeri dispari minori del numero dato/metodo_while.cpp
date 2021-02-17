#include <iostream>

using namespace std;

int main () {
	int n = 0; // dichiaro e inizializzo la il numero che verrà assegato dall' utente
	int numero = 0; // dichiaro e inizializzo il numero a qui assegnerò valori in modo crescente +1 all'interno del while riga 12 

	cout << "Inserisci numero: "; // stampo in console una frase
	cin >> n; // l'utente inserisce il numero

	while (numero < n) { // ciclo while se numero (il cui il valore aumenterà di +1 ad ogni compmento del ciclo) è minore di n (il numero dato dall'utente)

    	if (numero % 2 == 1) { // se il numero è dispari lo stampa in console
        	cout << numero << endl;
    	}
    	
    	numero++; // la variabile numero cresce di +1
	}
	
	system("PAUSE"); // blocco la console in modo che non si chiuda al compimento del programma
}
