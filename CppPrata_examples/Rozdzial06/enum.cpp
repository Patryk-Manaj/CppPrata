// enum.cpp -- użycie enum
#include <iostream>
// utworzenie nazwanych stałych dla liczb 0 - 6
enum {red, orange, yellow, green, blue, violet, indigo};

int main()
{
    using namespace std;
    cout << "Podaj kod koloru (0-6): ";
    int code;
    cin >> code;
    while (code >= red && code <= indigo)
    {
        switch (code)
        {
            case red     : cout << "Jej usta były czerwone.\n"; break;
            case orange  : cout << "Jej włosy były pomarańczowe.\n"; break;
            case yellow  : cout << "Jej buty były żółte.\n"; break;
            case green   : cout << "Jej paznokcie były zielone.\n"; break;
            case blue    : cout << "Jej dres był niebieski.\n"; break;
            case violet  : cout << "Jej oczy były fiołkowe.\n"; break;
            case indigo  : cout << "Była w nastroju indygo.\n"; break;
        }
        cout << "Podaj kod koloru (0-6): ";
        cin >> code;
    }
    cout << "Do widzenia\n";
    return 0; 
}
