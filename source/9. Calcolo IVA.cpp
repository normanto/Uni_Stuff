#include <iostream>
using namespace std;

int main()

{
    float starting_price, final_price, iva;

    cout << "Calcola il prezzo finale di un oggetto aggiungendo un'aliquota variabile.";

        cout << "\n\nInserire prezzo con IVA esclusa: ";
            cin >> starting_price;

        cout << "Inserire la % dell'aliquota: ";
            cin >> iva; 

        final_price = ((starting_price*22)/100) + starting_price;

        cout << "Il prezzo finale e': " << final_price;
        cout << "\n\n";    
}