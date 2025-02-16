// stacktem.cpp -- test szablonu klasy do obsługi stosu
#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"
using std::cin;
using std::cout;

int main()
{
    Stack<std::string> st; // tworzy pusty stos
    char ch;
    std::string po;
    cout << "Wpisz D, aby dodać zamówienie,\n"
        << "P, aby przetworzyć zamówienie, i Z, aby zakończyć.\n";
    while (cin >> ch && std::toupper(ch) != 'Z')
    {
        while (cin.get() != '\n')
            continue;
        if (!std::isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'D':
            case 'd': cout << "Podaj nowy numer zamówienia: ";
                      cin >> po;
                      if (st.isfull())
                          cout << "stos pełny\n";
                      else
                          st.push(po);
                      break;
            case 'P':
            case 'p': if (st.isempty())
                          cout << "Stos pusty\n";
                      else {
                          st.pop(po);
                          cout << "Numer zamówienia " << po << " zdjęty\n";
                          break;
                      }
        }
        cout << "Wpisz D, aby dodać zamówienie,\n"
            << "P, aby przetworzyć zamówienie, i Z, aby zakończyć.\n";
    }
    cout << "Koniec\n";
    return 0;
}

