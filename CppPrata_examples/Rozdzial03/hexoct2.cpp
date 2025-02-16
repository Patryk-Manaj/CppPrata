// hexoct2.cpp -- pokazuje liczby szesnastkowo i ósemkowo
#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42; 
    int inseam = 42;

    cout << "Co za figura!"  << endl;
    cout << "obwód piersi = " << chest << " (dziesiętnie dla 42)" << endl;
    cout << hex;        // manipulator zmieniający system liczbowy
    cout << "talia = " << waist << " (szesnastkowo dla 42)" << endl;
    cout << oct;      // manipulator zmieniający system liczbowy
    cout << "długość nogawki = " << inseam << " (ósemkowo dla 42)" << endl;
    return 0; 
}
