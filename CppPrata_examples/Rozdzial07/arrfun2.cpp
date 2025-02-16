// arrfun2.cpp -- funkcje z tablicą jako parametrem
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);
// użycie std:: zamiast dyrektywy using
int main()
{
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
// niektóre systemy wymagają poprzedzenia słowa int słowem
// static; bez tego niemożliwa jest inicjalizacja tablicy

    std::cout << cookies << " = adres tablicy, ";
//  niektóre systemy wymagają rzutowania typu: unsigned (cookies)

    std::cout << sizeof cookies << " = sizeof cookies\n";
    int sum = sum_arr(cookies, ArSize);
    std::cout << "Zjedzono ciasteczek: " << sum <<  std::endl;
    sum = sum_arr(cookies, 3);        // kłamstwo
    std::cout << "Pierwsze trzy osoby zjadły " << sum << " ciastek.\n";
    sum = sum_arr(cookies + 4, 4);    // kolejne kłamstwo
    std::cout << "Ostatnich czworo zjadło " << sum << " ciastek.\n";
    return 0;
}

// zwraca sumę tablicy liczb całkowitych
int sum_arr(int arr[], int n)
{
    int total = 0;
    std::cout << arr << " = arr, ";
// niektóre systemy wymagają rzutowania typu: unsigned (arr)

    std::cout << sizeof arr << " = sizeof arr\n";
    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total; 
}
