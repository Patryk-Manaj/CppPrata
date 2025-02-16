// condit.cpp -- użycie operatora wyboru
#include <iostream>
int main()
{
    using namespace std;
    int a, b;
    cout << "Podaj dwie liczby całkowite: ";
    cin >> a >> b;
    cout << "Większa z liczb " << a << " i " << b;
    int c = a > b ? a : b;   // c = a jeśli  a > b, inaczej c = b
    cout << " to " << c << endl;
    return 0; 
}
