// ourfunc.cpp -- definiujemy własną funkcję
#include <iostream>
void simon(int);    // prototyp funkcji simon()

int main()
{
    using namespace std;
    simon(3);       // wywołanie funkcji simon()
    cout << "Podaj liczbę całkowitą: ";
    int count;
    cin >> count;
    simon(count);   // wywołaj ponownie
    cout << "Gotowe!" << endl;
    return 0;
}

void simon(int n)   // definicja funkcji simon()
{
    using namespace std;
    cout << "Simon prosi, abyś dotknął palców u stóp " << n << " razy." << endl;
}                   // funkcja typu void  nie ma instrukcji return
