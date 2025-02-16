// arrstruc.cpp -- tablica struktur
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable guests[2] =          // inicjalizacja tablicy struktur
    {
        {"Bambi", 0.5, 21.99},      // pierwsza struktura z tablicy
        {"Godzilla", 2000, 565.99}  // następna struktura z tablicy
    };

    cout << "Goście tacy jak " << guests[0].name << " i " << guests[1].name
         << "\nrazem mają "
         << guests[0].volume + guests[1].volume << " stóp sześciennych.\n";
    return 0; 
}
