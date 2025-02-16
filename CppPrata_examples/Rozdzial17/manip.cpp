// manip.cpp -- stosowanie manipulatorów formatu
#include <iostream>

int main()
{
    using namespace std;
    cout << "Podaj liczbę całkowitą: ";
    int n;
    cin >> n;

    cout << "n     n*n\n";
    cout << n << "     " << n * n << " (dziesiętnie)\n";
    // ustaw tryb szesnastkowy
    cout << hex;
    cout << n << "     ";
    cout << n * n << " (szesnastkowo)\n";

    // ustaw tryb ósemkowy
    cout << oct << n << "     " << n * n << " (ósemkowo)\n";

    // alternatywny sposób wywołania manipulatora
    dec(cout);
    cout << n << "     " << n * n << " (dziesiętnie)\n";

    return 0;
}

