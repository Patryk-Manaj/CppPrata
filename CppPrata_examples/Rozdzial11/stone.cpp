// stone.cpp -- konwersje wartości typów liczbowych na obiekty własnego typu
// kompilować ze stonewt.cpp
#include <iostream>
using std::cout;
#include "stonewt.h"

void display(const Stonewt & st, int n);
int main()
{
    Stonewt incognito = 275; // inicjalizacja konstruktorem
    Stonewt wolfe(285.7);    // równoważne instrukcji: Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);

    cout << "Celebryta ważył ";
    incognito.show_stn();
    cout << "Detektyw ważył ";
    wolfe.show_stn();
    cout << "Prezydent ważył ";
    taft.show_lbs();
    incognito = 276.8;   // konwersja konstruktorem
        taft = 325;          // równoważne instrukcji: taft = Stonewt(325);
    cout << "Po obiedzie celebryta waży ";
    incognito.show_stn();
    cout << "Po obiedzie prezydent waży ";
    taft.show_lbs();
    display(taft, 2);
    cout << "A zapaśnik waży jeszcze więcej.\n";
    display(427, 2);
    cout << "Nie pozostał kamień na kamieniu\n";
    return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Oho! ";
        st.show_stn();
    }
}

