// cinfish.cpp -- dane nieliczbowe kończą wprowadzanie
#include <iostream>
const int Max = 5;
int main()
{
    using namespace std;
// pobierz dane
    double fish[Max];
    cout << "Proszę podać wagę swoich ryb.\n";
    cout << "Maksymalnie można podać " << Max
<< " ryb <q kończy>.\n";
    cout << "ryba 1.: ";
    int i = 0;
    while (i < Max && cin >> fish[i]) {
        if (++i < Max)
            cout << "ryba " << i+1 << ".: ";
    }
// wylicz średnią
    double total = 0.0;
    for (int j = 0; j < i; j++)
        total += fish[j];
// pokaż wyniki
    if (i == 0)
        cout << "Nie ma żadnych ryb\n";
    else
        cout << total / i << " = średnia waga "
            << i << " ryb\n";
    cout << "Gotowe.\n";
    return 0; 
}
