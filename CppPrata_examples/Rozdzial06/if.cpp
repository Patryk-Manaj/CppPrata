// if.cpp -- użycie instrukcji if
#include <iostream>
int main()
{
    using std::cin; // deklaracje using
    using std::cout;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.')   // koniec przy końcu zdania
    {
        if (ch == ' ')  // sprawdzamy, czy ch jest spacją
            ++spaces;
        ++total;        // przy każdym znaku
        cin.get(ch);
    }
    cout << "W zdaniu jest " << spaces << " spacji, a łącznie ";
    cout << total << " znaków.\n";
    return 0;
}
