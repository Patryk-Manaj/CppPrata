// switch.cpp -- użycie instrukcji switch
#include <iostream>
using namespace std;
void showmenu();   // prototypy funkcji
void report();
void comfort();
int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5)
    {
        switch(choice)
        {
            case 1  :   cout << "\a\n";
                        break;
            case 2  :   report();
                        break;
            case 3  :   cout << "Szef nigdzie nie wychodził.\n";
                        break;
            case 4  :   comfort();
                        break;
            default :   cout << "Nie ma takiej opcji.\n";
        }
        showmenu();
        cin >> choice;
    }
    cout << "Do zobaczenia!\n";
    return 0;
}

void showmenu()
{
    cout << "Wybierz 1, 2, 3, 4 albo 5:\n"
            "1) alarm           2) raport\n"
            "3) alibi           4) luzik\n"
            "5) koniec\n";
}
void report()
{
    cout << "To był naprawdę wspaniały tydzień.\n"
        "Sprzedaż wzrosła o 120%, wydatki zmalały o 35%.\n";
}
void comfort()
{
    cout << "Pracownicy uważają cię za najfajniejszego\n"
        "dyrektora w całej branży. Zarząd sądzi, że jesteś\n"
        "najlepszym dyrektorem w całym przemyśle.\n";
}
