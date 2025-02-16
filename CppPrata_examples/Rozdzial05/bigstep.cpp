// bigstep.cpp -- zliczanie według wskazówek
#include <iostream>
int main()
{
    using std::cout; // deklaracja using
    using std::cin;
    using std::endl;
    cout << "Podaj liczbę całkowitą: ";
    int by;
    cin >> by;
    cout << "Zliczanie co " << by << ":\n";
    for (int i = 0; i < 100; i = i + by)
        cout << i << endl;
    return 0;
}
