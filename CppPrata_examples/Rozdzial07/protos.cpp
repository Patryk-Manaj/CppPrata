// protos.cpp -- prototypy i wywołania funkcji
#include <iostream>
void cheers(int);       // prototyp: brak wartości zwracanej
double cube(double x);  // prototyp: zwracana wartość double
int main()
{
    using namespace std;
    cheers(5);          // wywołanie funkcji
    cout << "Podaj liczbę: ";
    double side;
    cin >> side;
    double volume = cube(side);    // wywołanie funkcji
    cout << "Kostka mająca bok " << side <<"cm ma pojemność ";
    cout << volume << " centymetrów sześciennych.\n";
    cheers(cube(2));    // działa ochrona prototypu
    return 0;
}

void cheers(int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
        cout << "Cześć! ";
    cout << endl;
}

double cube(double x)
{
    return x * x * x; 
}
