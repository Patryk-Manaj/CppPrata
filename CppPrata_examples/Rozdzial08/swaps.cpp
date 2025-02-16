// swaps.cpp -- użycie referencji i wskaźników do zamiany wartości
#include <iostream>
void swapr(int & a, int & b);   // a, b to aliasy wartości int
void swapp(int * p, int * q);   // p, q to adresy wartości int
void swapv(int a, int b);       // a, b to nowe zmienne
int main()
{
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;

    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Zamiana wartości za pomocą referencji:\n";
    swapr(wallet1, wallet2);   // przekaż zmienne
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Zamiana wartości za pomocą wskaźników:\n";
    swapp(&wallet1, &wallet2); // przekaż adresy zmiennych
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Próba zamiany przy przekazywaniu przez wartość:\n";
    swapv(wallet1, wallet2);   // przekazanie wartości zmiennych
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    return 0; 
}

void swapr(int & a, int & b)    // użycie referencji
{
    int temp;

    temp = a;       // użycie a, b jako wartości zmiennych
    a = b;
    b = temp;
}

void swapp(int * p, int * q)    // użycie wskaźników
{
    int temp;

    temp = *p;      // użycie *p, *q jako wartości zmiennych
    *p = *q;
    *q = temp;
}

void swapv(int a, int b)        // próba używa wartości
{
    int temp;

    temp = a;      // użycie a, b jako wartości zmiennych
    a = b;
    b = temp; 
}
