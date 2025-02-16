// newstrct.cpp -- operator new i struktury
#include <iostream>
struct inflatable   // definicja struktury
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable * ps = new inflatable; // alokacja pamięci na strukturę
    cout << "Podaj nazwę dmuchanej zabawki: ";
    cin.get(ps->name, 20);            // metoda 1. dostępu do pól
    cout << "Podaj objętość w stopach sześciennych: ";
    cin >> (*ps).volume;              // metoda 2. dostępu do pól
    cout << "Podaj cenę (zł): ";
    cin >> ps->price;
    cout << "Nazwa: " << (*ps).name << endl;                      // metoda 2.
    cout << "Objętość: " << ps->volume << " stóp sześciennych\n"; // metoda 1.
    cout << "Cena: " << ps->price << "zł" << endl;                // metoda 1.
    delete ps;                        // zwolnienie pamięci
    return 0; 
}
