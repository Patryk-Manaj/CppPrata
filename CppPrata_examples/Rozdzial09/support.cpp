// support.cpp -- stosowanie zmiennych zewnętrznych
// kompilować łącznie z external.cpp
#include <iostream>
extern double warming; // deklaracja referencyjna zmiennej warming z innego pliku
// zmienna zewnętrzna:
double warming = 0.3; // definicja zmiennej warming
// prototypy funkcji
void update(double dt);
void local();
using std::cout;

void update(double dt)           // modyfikuje zmienną globalną
{
    extern double warming;       // opcjonalne powtórzenie deklaracji
    warming += dt; // odwołanie do globalnej zmiennej warming
    cout << "Zwiększam parametr ocieplenia do " << warming;
    cout << " stopni.\n";
}

void local()           // korzysta ze zmiennej lokalnej
{
    double warming = 0.8;        // nowa zmienna przesłania zmienną zewnętrzną

    cout << "Lokalne ocieplenie wynosi " << warming << " stopni.\n";
    // odwołanie do zmiennej globalnej za pomocą operatora zasięgu
    cout << "Ale globalne ma wartość " << ::warming;
    cout << " stopni.\n";
}
