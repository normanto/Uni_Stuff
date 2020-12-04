#include <iostream>
using namespace std;

int main()

{
    int i, a, b, tot = 0;

        cout << "Calcola il prodotto tra due fattori.";

        cout << "\n\nInserisci il primo termine: ";
            cin >> a;

        cout << "Inserisci il secondo termine: ";
            cin >> b;

        for (int i = 0; i < b; i++) 

            tot = tot + a;        
        
        cout << "\nIl risultato e': " << tot;
        cout << "\n\n";
}