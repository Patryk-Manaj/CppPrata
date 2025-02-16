// twofile2.cpp -- zmienne z łączeniem zewnętrznym i wewnętrznym
#include <iostream>
extern int tom;              // zmienna tom zdefiniowana gdzie indziej
static int dick = 10;        // przesłania zewnętrzną wersję zmiennej dick
int harry = 200;             // definicja zmiennej zewnętrznej,
                             // bez konfliktu z wersją z pliku twofile1

void remote_access()
{
    using namespace std;
    cout << "Funkcja remote_access() zwraca następujące adresy:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
}
