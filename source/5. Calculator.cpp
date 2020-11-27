#include <iostream>
using namespace std;
int main()
{
    int cifra1, cifra2, risultato;
    char operatore;
    char tasto;
    cout <<"Ciao frate, sono una calcolatrice potentissima." << endl;
        
        cout <<"Inserisci la prima cifra   : ";
            cin >> cifra1; 

        cout <<"Inserisci l'operatore      : ";
            cin >> operatore; 
    
        cout <<"Inserisci la seconda cifra : ";
            cin >> cifra2;

    switch (operatore)
    {
     case '+': risultato = cifra1 + cifra2;
        break;
    
     case '-': risultato = cifra1 - cifra2;
        break;
    
     case '*': risultato = cifra1 * cifra2;
        break;

     case '/': risultato = cifra1 / cifra2;

    };

    cout << "\nIl risultato e' " <<risultato;
    cout << "\n\n\n";
    
    system("pause");
    
}
