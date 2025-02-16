// twoarg.cpp -- funkcja 2-parametrowa
#include <iostream>
using namespace std;
void n_chars(char, int);
int main()
{
    int times;
    char ch;

    cout << "Podaj znak: ";
    cin >> ch;
    while (ch != 'q')        // q to quit
    {
        cout << "Podaj liczbę całkowitą: ";
        cin >> times;
        n_chars(ch, times); // funkcja dwuparametrowa
        cout << "\nPodaj następny znak; litera q kończy: ";
        cin >> ch;
    }
    cout << "Wartość zmiennej times to " << times << ".\n";
    cout << "Do widzenia.\n";
    return 0;
}

void n_chars(char c, int n) // pokazuje c n razy
{
    while (n-- > 0)         // kontynuacja, aż n dojdzie do 0
        cout << c;
}
