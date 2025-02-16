// strings.cpp -- zapis łańcuchów w tablicy
#include <iostream>
#include <cstring>  // zawiera deklarację funkcji strlen()
int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];               // pusta tablica
    char name2[Size] = "C++owboy";  // tablica zainicjalizowana
    // UWAGA: w niektórych implementacjach, aby zainicjalizować tablicę
    // name2, konieczne może być użycie słowa kluczowego static

    cout << "Jak się masz! Jestem " << name2;
    cout << "! A jak ty się nazywasz?\n";
    cin >> name1;
    cout << "No tak, " << name1 << ", twoje imię ma ";
    cout << strlen(name1) << " liter i jest zapisane\n";
    cout << "w tablicy mającej " << sizeof(name1) << " bajtów.\n";
    cout << "Twój inicjał to " << name1[0] << ".\n";
    name2[3] = '\0';                // znak NUL
    cout << "Pierwsze trzy litery mojego imienia to: ";
    cout << name2 << endl;
return 0;
}
