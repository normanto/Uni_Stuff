#include <iostream>
using namespace std;

int main()

{
    int in;
    float out, s = 0;

        cout << "Calcola la media di 10 numeri.";
            cout << "\n";
                    
        for (int i = 0; i < 10; i++) {
            
            cout << "Inserisci il numero: ";
                cin >> in;
        
        s = s + in;
    }
        out = s / 10;

        cout << "\nLa media e': " << out;
        cout << "\n\n";
}