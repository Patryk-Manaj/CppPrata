// usetime2.cpp -- test trzeciej wersji klasy Time
// kompilować z plikiem mytime2.cpp
#include <iostream>
#include "mytime2.h"

int main()
{
    using std::cout;
    using std::endl;
    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    cout << "czas pielenia = ";
    weeding.Show();
    cout << endl;

    cout << "czas woskowania = ";
    waxing.Show();
    cout << endl;

    cout << "łączny czas pracy = ";
    total = weeding + waxing;       // zastosowanie operatora operator+()
    total.Show();
    cout << endl;

    diff = weeding - waxing;        // zastosowanie operatora operator-()
    cout << "czas pielenia - czas woskowania = ";
    diff.Show();
    cout << endl;

    adjusted = total * 1.5;         // zastosowanie operatora operator*()
    cout << "czas pracy z poprawką na przerwy = ";
    adjusted.Show();
    cout << endl;
    return 0;
}

