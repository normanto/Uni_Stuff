#include <iostream>
using namespace std;

int main()

{
    int num;

    cout << "Calcola il valore assoluto.";
    
        cout << "\n\nInserire il numero: ";
            cin >> num;
    
    if (num >= 0)
        cout << "Il suo valore assoluto e': " << num;

    else if (num < 0) 
        cout << "Il suo valore assoluto e': " << -num;
        cout << "\n\n";
         
}