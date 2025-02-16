// showpt.cpp -- ustawianie precyzji, wyświetlanie zer końcowych
#include <iostream>

int main()
{
    using std::cout;
    using std::ios_base;

    float price1 = 20.40;
    float price2 = 1.9 + 8.0 / 9.0;

    cout.setf(ios_base::showpoint);
    cout << "\"Futrzaki\" kosztują " << price1 << " zł!\n";
    cout << "\"Smoki\" kosztują " << price2 << " zł!\n";

    cout.precision(2);
    cout << "\"Futrzaki\" kosztują " << price1 << " zł!\n";
    cout << "\"Smoki\" kosztują " << price2 << " zł!\n";

    return 0;
}

