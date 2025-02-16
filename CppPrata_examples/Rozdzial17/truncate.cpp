// truncate.cpp -- używanie funkcji get() do skracania w razie potrzeby wiersza wejściowego
#include <iostream>
const int SLEN = 10;
inline void eatline() { while (std::cin.get() != '\n') continue; }
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    char name[SLEN];
    char title[SLEN];
    cout << "Podaj swoje imię i nazwisko: ";
    cin.get(name,SLEN);
    if (cin.peek() != '\n')
        cout << "Przykro nam, miejsca wystarczy tylko na "
            << name << endl;
    eatline();
    cout << "Drogi(-a) " << name << ", podaj swoje stanowisko: \n";
    cin.get(title,SLEN);
    if (cin.peek() != '\n')
        cout << "Byliśmy zmuszeni skrócić nazwę Twojego stanowiska.\n";
    eatline();
    cout << "Imię i nazwisko: " << name
        << "\n     Stanowisko: " << title << endl;

    return 0;
}

