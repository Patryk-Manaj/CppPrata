// typecast.cpp -- wymuszanie zmian typu
#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;

    // poniższa instrukcja dodaje wartości jako typ double,
    // następnie konwertuje wynik na int
    auks = 19.99 + 11.99;

    // te instrukcje dodają wartości jako typ int
    bats = (int) 19.99 + (int) 11.99;   // stara składnia C
    coots = int (19.99) + int (11.99);  // nowa składnia C++
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "Kod odowiadający znakowi " << ch << " to ";  // pokaż jako char
    cout << int(ch) << endl;                              // pokaż jako int
    cout << "Tak, ten kod to ";
    cout << static_cast<int>(ch) << endl;                 // z użyciem static_cast
    return 0; 
}
