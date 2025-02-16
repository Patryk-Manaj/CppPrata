// cingolf.cpp -- pomijanie danych niebędących liczbami
#include <iostream>
const int Max = 5;
int main()
{
    using namespace std;
// pobierz dane
    int golf[Max];
    cout << "Proszę podać swoje wyniki w golfie.\n";
    cout << "Musisz podać wynik " << Max << " gier.\n";
    int i;
    for (i = 0; i < Max; i++)
    {
        cout << "tura " << i+1 << ".: ";
        while (!(cin >> golf[i])) {
            cin.clear();     // zerowanie obiektu cin
            while (cin.get() != '\n')
                continue;    // pozbycie się błędnych danych
            cout << "Proszę podać liczbę: ";
        }
    }
// wyliczenie średniej
    double total = 0.0;
    for (i = 0; i < Max; i++)
        total += golf[i];
// podanie wyników
    cout << total / Max << " = średni wynik z "
            << Max << " tur\n";
    return 0; 
}
