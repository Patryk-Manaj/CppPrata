// convert.cpp -- zamiana kamieni na funty
#include <iostream>
int stonetolb(int);     // prototyp funkcji
int main()
{
    using namespace std;
    int stone;
    cout << "Podaj wagę w kamieniach: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " kamieni = ";
    cout << pounds << " funtów." << endl;
    return 0;
}

int stonetolb(int sts)
{
     return 14 * sts;
}
