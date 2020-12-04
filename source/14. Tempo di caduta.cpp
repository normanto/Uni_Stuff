#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    double t, h, g = 9.81;
    
    cout << "Calcola il tempo di caduta di un oggetto.";
    
    cout << "\nInserisci l'altezza in metri: ";
        cin >> h;

    t = (sqrt(2*g*h))/g;

    cout << "Il tempo di caduta dell'oggetto e' di " << t << " secondi.";
    cout << "\n\n";

}