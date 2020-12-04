#include <iostream>
using namespace std;

int main()

{
    int num, max = 0, n = 0;
    bool continua = true; 
    float sum = 0, media;
    
    cout << "Inserisci una sequenza di numeri positivi. ";
        cout << "\n";

    do { 
        cout << "Numero: ";
            cin >> num;

        if (num < 0)
            continua = false;

        else {
                sum = sum + num;
                if (num > max);
                    max = num;
            
                n = n + 1;
             }   
        }  
            while (continua);

            media = sum / n;
        
            cout << "Inseriti " << n << " valori: somma = " << sum << ", max = " << max << ", media = " << media;
            cout << "\n\n";
}