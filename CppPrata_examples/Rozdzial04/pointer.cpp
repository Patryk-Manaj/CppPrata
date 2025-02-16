// pointer.cpp -- nasza pierwsza zmienna wskaźnikowa
#include <iostream>
int main()
{
    using namespace std;
    int updates = 6;        // deklaracja zmiennej
    int * p_updates;        // deklaracja wskaźnika na int

    p_updates = &updates;   // przypisanie wskaźnikowi adresu int

// pokazanie wartości na dwa sposoby
    cout << "Wartości: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

// pokazanie adresu na dwa sposoby
    cout << "Adresy: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

// użycie wskaźnika do zmiany wartości
    *p_updates = *p_updates + 1;
    cout << "Teraz updates = " << updates << endl;
    return 0; 
}
