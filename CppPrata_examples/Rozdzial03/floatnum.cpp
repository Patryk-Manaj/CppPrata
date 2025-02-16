// floatnum.cpp -- typy zmiennoprzecinkowe
#include <iostream>
int main()
{
    using namespace std; 
    cout.setf(ios_base::fixed, ios_base::floatfield); // stałoprzecinkowy
    float tub = 10.0 / 3.0;     // dokładność na około 6 cyfrach
    double mint = 10.0 / 3.0;   // dokładność na około 15 cyfrach
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a milion razy tub = " << million * tub;
    cout << ",\na dziesięć milionów razy tub = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint << ", a milion razy mint = ";
    cout << million * mint << endl;
    return 0;
}
