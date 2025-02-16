// arraynew.cpp -- użycie operatora newdo tablicy
#include <iostream>
int main()
{
    using namespace std;
    double * p3 = new double [3]; // miejsce na 3 wartości double
    p3[0] = 0.2;                  // traktujemy p3 jak nazwę tablicy
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] to " << p3[1] << ".\n";
    p3 = p3 + 1;                  // zwiększenie wskaźnika
    cout << "Teraz p3[0] to " << p3[0] << ", a ";
    cout << "p3[1] to " << p3[1] << ".\n";
    p3 = p3 - 1;                  // znów wskazujemy początek tablicy
    delete [] p3;                 // zwalniamy pamięć
    return 0; 
}
