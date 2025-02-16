// ifelseif.cpp -- użycie if else if else
#include <iostream>
const int Fave = 27;
int main()
{
    using namespace std;
    int n;

    cout << "Szukaj mojej ulubionej liczby - mieści się ";
    cout << "w zakresie 1 - 100: ";
    do
    {
        cin >> n;
        if (n < Fave)
            cout << "Za mało -- próbuj dalej: ";
        else if (n > Fave)
            cout << "Za dużo -- próbuj dalej: ";
        else
            cout << Fave << " to jest to!\n";
    } while (n != Fave);
    return 0;
}
