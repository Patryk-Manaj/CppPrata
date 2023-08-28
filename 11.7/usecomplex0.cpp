#include <iostream>
using namespace std; 
#include "complex0.h"

int main()
{
    complex a(3.0, 4.0);
    complex c; 
    cout << "Enter a complex number (k, to termiante): \n";
    while (cin >> c)
    {
        cout << "c is " << c << '\n';
        cout << "Conjugate with c is " << ~c << '\n';
        cout << "a is " << a << '\n';
        cout << "a + c is " << a + c << '\n';
        cout << "a - c is " << a - c << '\n';
        cout << "a * c is " << a * c << '\n';
        cout << "2 * c is " << 2 * c << '\n';
        cout << "Enter a complex number (k, to termiante): \n";

    }
    cout << "\nDone!\n";
    return 0; 
}