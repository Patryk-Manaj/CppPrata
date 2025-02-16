// align.cpp -- sprawdzanie wymaganego wyrównania
#include <iostream>
using namespace std;

struct things1
{
    char ch;
    int a;
    double x;
};
struct things2
{
    int a;
    double x;
    char ch;
};

int main()
{
    things1 th1;
    things2 th2;
    cout << "wyrównanie typu char: " << alignof(char) << endl;
    cout << "wyrównanie typu int: " << alignof(int) << endl;
    cout << "wyrównanie typu double: " << alignof(double) << endl;
    cout << "wyrównanie typu things1: " << alignof(things1) << endl;
    cout << "wyrównanie typu things2: " << alignof(things2) << endl;
    cout << "rozmiar typu things1: " << sizeof(things1) << endl;
    cout << "rozmiar typu things2: " << sizeof(things2) << endl;
    return 0;
}

