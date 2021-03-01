/**
*	media numeri negativi e somma numeri positivi di n numeri dati
*	
*	Autore: Filippo Palmucci
*	Consegna: realizzare un algoritmo che calcoli la media dei numeri negativi e la somma dei positivi di n numeri inseriti dall'utente
*/

#include <iostream>
using namespace std;

int main () {
    int media = 0;
    int sommaP = 0;
    int sommaN = 0;
    int conta = 0;
    int contaN = 0;
    int numero = 0;
    int numeri = 0;

    cout << "Quanti numeri vuoi inserire?" << endl;
    cin >> numeri;

    while (conta < numeri) {
        cout << "Inserire numero:" << endl;
        cin >> numero;
        conta++;
        if (numero < 0) {
            sommaN = sommaN + numero;
            contaN++;
        }
        else {
            sommaP = sommaP + numero;
        }
    }
    media = sommaN / contaN;
    cout << "La media dei numeri negativi e':" << endl;
    cout << media << endl;
    cout << "La somma dei numeri postivi e':" << endl;
    cout << sommaP << endl;
}