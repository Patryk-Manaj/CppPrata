// or.cpp -- użycie operatora logicznej alternatywy
#include <iostream>
int main()
{
    using namespace std;
    cout << "Program ten może sformatować twój dysk\n"
            "i zniszczyć wszystkie znajdujące się na nim dane.\n"
            "Czy mam kontynuować? <t/n> ";
    char ch;
    cin >> ch;
    if (ch == 't' || ch == 'T')             // t lub T
        cout << "Ostrzegałem!\a\a\n";
    else if (ch == 'n' || ch == 'N')        // n lub N
        cout << "Bardzo rozsądnie... Do widzenia\n";
    else
        cout << "Nie wybrano t ani n, najwyraźniej "
        "nie rozumiesz instrukcji, więc "
        "i tak zniszczę całą zawartość dysku.\a\a\a\n";
    return 0;
}
