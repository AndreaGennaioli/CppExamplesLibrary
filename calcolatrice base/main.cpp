/**
*	Semplice calcolatrice
*	
*	Autore: Andrea Gennaioli
*	Consegna: realizzare una calcolatrice in grado di calcolare un'operazione una volta averne specificato il tipo
*/

#include <iostream>

using namespace std;

int main() {
    int scelta;
    float risultato = 0;

    cout << "Seleziona tipo di operazione" << endl;
    cout <<"1.somma" << endl  << "2.sottrazione" << endl << "3.moltiplicazione" << endl << "4.divisione" << endl;
    cin >> scelta;

    if(scelta == 1){
        float addendo_1;
        float addendo_2;
        cout << "addendo 1:" << endl;
        cin >> addendo_1;
        cout << "addendo 2" << endl;
        cin >> addendo_2;
        risultato = addendo_1 + addendo_2;
    } else if(scelta == 2) {
        float minuendo;
        float sottraendo;
        cout << "minuendo:" << endl;
        cin >> minuendo;
        cout << "sottraendo" << endl;
        cin >> sottraendo;
        risultato = minuendo - sottraendo;
    } else if(scelta == 3) {
        float fattore_1;
        float fattore_2;
        cout << "fattore 1: " << endl;
        cin >> fattore_1;
        cout << "fattore 2 " << endl;
        cin >> fattore_2;
        risultato = fattore_1 * fattore_2;
    } else if(scelta == 4) {
        float dividendo;
        float divisore;
        cout << "dividendo: " << endl;
        cin >> dividendo;
        cout << "divisore " << endl;
        cin >> divisore;
        risultato = dividendo / divisore;
    } else {
		cout << "Non hai selezionato nessuna opzione";
	}
    cout << "Risultato: " << risultato;
}
