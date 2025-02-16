// vegnews.cpp -- test działania operatorów new i delete w klasach
// kompilować ze strngbad.cpp
#include <iostream>
using std::cout;
#include "strngbad.h"

void callme1(StringBad &);   // obiekt przekazywany przez referencję
void callme2(StringBad);     // obiekt przekazywany przez wartość

int main()
{
    using std::endl;
    {
        cout << "Zaczynamy blok wewnętrzny.\n";
        StringBad headline1("Śpiew skowronka - nowe zwrotki usypiają?");
        StringBad headline2("Kogutom śmierć");
        StringBad sports("Brzask wypada z ligi, skandal sędziowski");
        cout << "Z ostatniej chwili: " << headline1 << endl;
        cout << "Temat dnia: " << headline2 << endl;
        cout << "Wiadomości sportowe: " << sports << endl;
        callme1(headline1);
        cout << "Z ostatniej chwili: " << headline1 << endl;
        callme2(headline2);
        cout << "Temat dnia: " << headline2 << endl;
        cout << "Inicjalizacja obiektu ciągu innym obiektem:\n";
        StringBad sailor = sports;
        cout << "Z kraju: " << sailor << endl;
        cout << "Przypisanie obiektu do innego obiektu:\n";
        StringBad knot;
        knot = headline1;
        cout << "Ze świata: " << knot << endl;
        cout << "Koniec bloku.\n";
    }
    cout << "Koniec main()\n";

    return 0;
}

void callme1(StringBad & rsb)
{
    cout << "Obiekt ciągu przekazany przez referencję:\n";
    cout << "    \"" << rsb << "\"\n";
}

void callme2(StringBad sb)
{
    cout << "Obiekt ciągu przekazany przez wartość:\n";
    cout << "    \"" << sb << "\"\n";
}

