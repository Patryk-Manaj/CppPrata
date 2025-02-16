// instr2.cpp -- wczytanie za pomocą getline nie tylko pojedynczych słów
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Podaj swoje imię:\n";
    cin.getline(name, ArSize);  // wczytuje dane do znaku nowego wiersza
    cout << "Podaj swój ulubiony deser:\n";
    cin.getline(dessert, ArSize);
    cout << "Mam dla ciebie " << dessert;
    cout << ", " << name << ".\n";
    return 0; 
}
