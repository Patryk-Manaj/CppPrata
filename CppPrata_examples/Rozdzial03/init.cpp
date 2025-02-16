// init.cpp -- zmiany typów przy inicjalizacji
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;     // konwersja int na float
    int guess(3.9832);  // konwersja double na int
    int debt = 7.2E12;  // wynik nieokreślony
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    // cin.get();
    return 0;
}
