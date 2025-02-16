// express.cpp -- wartości wyrażeń
#include <iostream>
int main()
{
    using namespace std;
    int x;

    cout << "Wyrażenie x = 100 ma wartość ";
    cout << (x = 100) << endl;
    cout << "Teraz x = " << x << endl;
    cout << "Wyrażenie x < 3 ma wartość ";
    cout << (x < 3) << endl;
    cout << "Wyrażenie x > 3 ma wartość ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);   // nowość w C++
    cout << "Wyrażenie x < 3 ma wartość ";
    cout << (x < 3) << endl;
    cout << "Wyrażenie x > 3 ma wartość ";
    cout << (x > 3) << endl;
    return 0; 
}
