// arrfun.cpp -- funkcje z tablicą jako parametrem
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);        // prototyp
int main()
{
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
// niektóre systemy wymagają poprzedzenia słowa int słowem
// static, aby umożliwić inicjalizację tablicy

    int sum = sum_arr(cookies, ArSize);
    cout << "Liczba zjedzonych ciasteczek: " << sum <<  "\n";
    return 0;
}

// zwraca sumę tablicy całkowitoliczbowej
int sum_arr(int arr[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total; 
}
