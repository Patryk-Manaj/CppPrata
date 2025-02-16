// getinfo.cpp -- wejście i wyjście
#include <iostream>

int main()
{
    using namespace std;
    
    int carrots;
    
    cout << "Ile masz marchewek?" << endl;
    cin >> carrots;    // wczytywanie w C++ 
    cout << "Proszę, oto jeszcze dwie. ";
    carrots = carrots + 2;
    // w następnym wierszu sklejamy wyniki
    cout << "Teraz masz " << carrots << " marchewek." << endl;
    return 0;
}
