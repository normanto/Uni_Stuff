#include <iostream> 
using namespace std;

int main()

{
    int a, b, somma, prodotto; 

    cout << "Calcola somma-prodotto di due cifre.";
        
        cout << "\n\nInserisci la prima cifra: ";
            cin >> a;
    
        cout << "Inserisci la seconda cifra: ";
            cin >> b;

    somma = a + b;
    prodotto = a * b;

        cout << "Il risultato e' " << somma - prodotto;
        cout << "\n\n";
    
}