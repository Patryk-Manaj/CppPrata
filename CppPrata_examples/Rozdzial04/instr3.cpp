// instr3.cpp -- wczytywanie więcej niż jednego słowa za pomocą get().get()
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Podaj swoje imię:\n";
    cin.get(name, ArSize).get();    // wczytanie wiersza i znaku nowego wiersza
    cout << "Podaj swój ulubiony deser:\n";
    cin.get(dessert, ArSize).get();
    cout << "Mam dla ciebie " << dessert;
    cout << ", " << name << ".\n";
    return 0; 
}
