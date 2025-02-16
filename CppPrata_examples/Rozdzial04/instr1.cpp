// instr1.cpp -- odczyt więcej niż jednego łańcucha
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Podaj swoje imię:\n";
    cin >> name;
    cout << "Podaj swój ulubiony deser:\n";
    cin >> dessert;
    cout << "Mam dla ciebie " << dessert;
    cout << ", " << name << ".\n";
    return 0; 
}
