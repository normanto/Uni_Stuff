#include <iostream>
using namespace std;

int main ()
{
    float c, f;
        cout << "Inserisci la temperatura in Celsius: ";
            cin >> c;

    f = c * 1.8 + 32;
        cout << "La temperatura equivale a: " << f << " F";
        cout << "\n\n"; 
}