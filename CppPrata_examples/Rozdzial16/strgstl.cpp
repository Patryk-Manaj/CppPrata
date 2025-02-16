// strgstl.cpp -- używanie biblioteki STL dla klasy string
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    using namespace std;
    string letters;

    cout << "Podaj zestaw liter (koniec, aby zakończyć): ";
    while (cin >> letters && letters != "koniec")
    {
        cout << "Permutacje liter " << letters << endl;
        sort(letters.begin(), letters.end());
        cout << letters << endl;
        while (next_permutation(letters.begin(), letters.end()))
            cout << letters << endl;
        cout << "Podaj kolejny zestaw liter (koniec, aby zakończyć): ";
    }
    cout << "Koniec.\n";

    return 0;
}

