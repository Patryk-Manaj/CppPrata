// use_new.cpp -- użycie operatora new
#include <iostream>
int main()
{
    using namespace std;
    int nights = 1001;
    int * pt = new int;         // alokacja pamięci na wartość int
    *pt = 1001;                 // zapis tam wartości

    cout << "wartość nights = ";
    cout << nights << ": położenie " << &nights << endl;
    cout << "int ";
    cout << "wartość = " << *pt << ": położenie = " << pt << endl;

    double * pd = new double;   // alokacja pamięci na wartość double
    *pd = 10000001.0;           // zapis tam wartości

    cout << "double: ";
    cout << "wartość = " << *pd << ": położenie = " << pd << endl;
    cout << "położenie wskaźnika pd: " << &pd << endl;
    cout << "wielkość pt = " << sizeof(pt);
    cout << ": wielkość *pt = " << sizeof(*pt) << endl;
    cout << "wielkość pd = " << sizeof pd;
    cout << ": wielkość *pd = " << sizeof(*pd) << endl;
    return 0;
}
