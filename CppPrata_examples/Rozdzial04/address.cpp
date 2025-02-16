// address.cpp -- użycie operatora & do określenia adresu
#include <iostream>
int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "wartość zmiennej donuts = " << donuts;
    cout << ", a adres tej zmiennej = " << &donuts << endl;
// UWAGA: konieczne może się okazać użycie unsigned (&donuts)
// oraz unsigned (&cups)
    cout << "wartość zmiennej cups = " << cups;
    cout << ", a adres tej zmiennej = " << &cups << endl;
    return 0; 
}
