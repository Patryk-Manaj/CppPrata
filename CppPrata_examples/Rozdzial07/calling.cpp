// calling.cpp -- definiowanie, prototypowanie i wywołanie funkcji
#include <iostream>

void simple();    // prototyp funkcji

int main()
{
    using namespace std;
    cout << "main() wywoła funkcję simple():\n";
    simple();     // wywołanie funkcji
    cout << "main() po zakończeniu funkcji simple().\n";
    // cin.get();
    return 0;
}

// definicja funkcji
void simple()
{
    using namespace std;
    cout << "Jestem sobie taką prościutką funkcją.\n";
}
