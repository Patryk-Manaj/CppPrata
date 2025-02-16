// static.cpp -- stosowanie lokalnej zmiennej statycznej
#include <iostream>
// stałe:
const int ArSize = 10;

// prototyp funkcji:
void strcount(const char * str);

int main()
{
    using namespace std;
    char input[ArSize];
    char next;

    cout << "Wprowadź wiersz:\n";
    cin.get(input, ArSize);
    while (cin)
    {
        cin.get(next);
        while (next != '\n')       // wiersz nie zmieścił się w buforze!
            cin.get(next); // porzucenie reszty znaków z wejścia
        strcount(input);
        cout << "Wprowadź następny wiersz (wiersz pusty kończy wprowadzanie):\n";
        cin.get(input, ArSize);
    }
    cout << "Koniec\n";
    return 0;
}

void strcount(const char * str)
{
    using namespace std;
    static int total = 0;          // statyczna zmienna lokalna
    int count = 0;                 // automatyczna zmienna lokalna

    cout << "\"" << str << "\" zawiera ";
    while (*str++)                  // przejdź na koniec ciągu
        count++;
    total += count;
    cout << count << " znaków\n";
    cout << "Łącznie "<< total << " znaków\n";
}
