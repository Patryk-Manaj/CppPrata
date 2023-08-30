// usestock2.cpp -- testowanie klasy Stock
// kompilować z plikiem stock20.cpp
#include <iostream>
#include "stock20.h"

const int STKS = 4;
using namespace std;
int main()
{
    // utwórz tablicę zainicjalizowanych obiektów
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("BurakPOL", 200, 2.0),
        Stock("GruzPOL", 130, 3.25),
        Stock("FutroPOL", 60, 6.5)
    };

    std::cout << "Portfel inwestycyjny:\n";
    int st;
    for (st = 0; st < STKS; st++)
        cout << stocks[st] << endl;
    // ustawienie wskaźnika na pierwszy element
    const Stock * top = &stocks[0];
    for (st = 0; st < STKS; st++)
        top = &top->topval(stocks[st]);
    // teraz top wskazuje do najbardziej wartościowych udziałów w portfelu
    std::cout << "\nNajbardziej wartościowy pakiet:\n";
    cout << *top;
    return 0;
}

