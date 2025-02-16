// morechar.cpp -- typ char a typ int
#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';       // przypisanie zmiennej ch kodu ASCII znaku M
    int i = ch;          // zapis tego samego kodu jako wartości int
    cout << "Kod ASCII znaku " << ch << " to " << i << endl;

    cout << "Dodajemy do kodu znaku jedynkę:" << endl;
    ch = ch + 1;          // zmiana kodu znaku ze zmiennej ch 
    i = ch;               // zapis nowego kodu znaku w i
    cout << "Kod ASCII znaku " << ch << " to " << i << endl;

    // użycie metody cout.put() do pokazania znaku
    cout << "Wypisanie char ch za pomocą cout.put(ch): ";
    cout.put(ch);

    // użycie metody cout.put() do pokazania stałej znakowej
    cout.put('!');

    cout << endl << "Gotowe" << endl;
    return 0;
}
