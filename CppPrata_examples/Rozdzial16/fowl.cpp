// fowl.cpp -- tutaj auto_ptr to zły wybór
#include <iostream>
#include <string>
#include <memory>

int main()
{
    using namespace std;
    auto_ptr<string> films[5] =
    {
        auto_ptr<string> (new string("Sówki, sówki")),
        auto_ptr<string> (new string("Gadająca kaczka")),
        auto_ptr<string> (new string("Wyścig kurczaków")),
        auto_ptr<string> (new string("Kozi syn")),
        auto_ptr<string> (new string("Kukułcze jaja"))
    };
    auto_ptr<string> pwin;
    pwin = films[2]; // films[2] traci "posiadanie"
    cout << "Nominowani w kategorii najlepszego filmu przyrodniczego są:\n";
    for (int i = 0; i < 5; i++)
        cout << *films[i] << endl;
    cout << "A zwycięzcą jest " << *pwin << "!\n";
    cin.get();
    return 0;
}

