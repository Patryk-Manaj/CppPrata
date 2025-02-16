// arrfun4.cpp -- funkcje i zakres tablicy
#include <iostream>
const int ArSize = 8;
int sum_arr(const int * begin, const int * end);
int main()
{
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
// niektóre systemy wymagają poprzedzenia słowa int słowem static,
// gdyż inaczej niemożliwa jest inicjalizacja tablicy

    int sum = sum_arr(cookies, cookies + ArSize);
    cout << "Zjedzono ciasteczek: " << sum <<  endl;
    sum = sum_arr(cookies, cookies + 3);        // pierwsze trzy elementy
    cout << "Pierwsze trzy osoby zjadły " << sum << " ciastek.\n";
    sum = sum_arr(cookies + 4, cookies + 8);    // ostatnie 4 elementy
    cout << "Ostatnich czworo zjadło " << sum << " ciastek.\n";
    return 0;
}

// zwraca sumę tablicy liczb całkowitych
int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;

    for (pt = begin; pt != end; pt++)
        total = total + *pt;
    return total; 
}
