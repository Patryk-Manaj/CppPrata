// structur.cpp -- prosty przykład użycia struktury
#include <iostream>
struct inflatable   // deklaracja struktury
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",  // wartość pola name
        1.88,               // wartość pola volume
        29.99               // wartość pola price
    };  // guest to zmienna strukturalna typu inflatable
        // Zmienną tę inicjalizujemy wartościami jak powyżej.
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };  // pal to druga zmienna typu inflatable
// UWAGA: w niektórych implementacja C++ obowiązuje zapis:
// static inflatable guest =

    cout << "Wpisz na swoją listę gości jeszcze: " << guest.name;
    cout << " oraz " << pal.name << "!\n";
// pal.name is to pole name zmiennej pal
    cout << "Możesz mieć ich oboje za ";
    cout << guest.price + pal.price << "zł!\n";
    return 0; 
}
