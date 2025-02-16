// arrayone.cpp -- małe tablice liczb całkowitych
#include <iostream>
int main()
{
    using namespace std;
    int yams[3];    // tworzy trójelementową tablicę
    yams[0] = 7;    // przypisuje wartość pierwszemu elementowi
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5}; // tworzenie + inicjalizacja tablicy
// UWAGA: Jeśli kompilator lub translator C++ nie pozwala takiej
// tablicy zainicjalizować, należy zamiast int yamcosts[3] użyć
// zapisu static int yamcosts[3].

    cout << "Razem ignamów = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "Paczka zawierająca " << yams[1] << " ignamów kosztuje po ";
    cout << yamcosts[1] << " groszy za bulwę.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "Łączny koszt ignamu to " << total << " groszy.\n";

    cout << "\nRozmiar tablicy yams = " << sizeof yams;
    cout << " bajtów.\n";
    cout << "Rozmiar jednego elementu = " << sizeof yams[0];
    cout << " bajtów.\n";
    return 0; 
}
