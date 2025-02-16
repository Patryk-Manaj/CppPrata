// funtemp.cpp -- użycie szablonu funkcji
#include <iostream>
// prototyp szablonu funkcji
template <typename T> // albo class T
void Swap(T &a, T &b);

int main()
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Użycie funkcji obsługującej typ int, "
            "wygenerowanej przez kompilator:\n";
    Swap(i,j);  // generuje void Swap(int &, int &)
    cout << "Teraz i, j = " << i << ", " << j << ".\n";

    double x = 24.5;
    double y = 81.7;
    cout << "x, y = " << x << ", " << y << ".\n";
    cout << "Użycie funkcji obsługującej typ double, "
            "wygenerowanej przez kompilator:\n";
    Swap(x,y);  // generuje void Swap(double &, double &)
    cout << "Teraz x, y = " << x << ", " << y << ".\n";
    // cin.get();
    return 0;
}

// definicja szablonu funkcji
template <typename T> // lub class T
void Swap(T &a, T &b)
{
    T temp;   // zmienna temp typu T
    temp = a;
    a = b;
    b = temp; 
}
