// and.cpp -- użycie operatora koniunkcji logicznej
#include <iostream>
const int ArSize = 6;
int main()
{
    using namespace std;
    float naaq[ArSize];
    cout << "Podaj wartości WPNW (Współczynniki Podatności Na Wpływy) "
         << "\nswoich sąsiadów. Działanie programu zakończy się "
         << "po podaniu\n" << ArSize << " wartości "
         << "lub po podaniu wartości ujemnej.\n";

    int i = 0;
    float temp;
    cout << "Wartość pierwsza: ";
    cin >> temp;
    while (i < ArSize && temp >= 0) // 2 warunki przerwania
    {
        naaq[i] = temp;
        ++i;
        if (i < ArSize)             // w tablicy jest jeszcze miejsce
        {
            cout << "Następna wartość: ";
            cin >> temp;            // więc pobieramy następną wartość
        }
    }
    if (i == 0)
        cout << "Brak danych - pa pa.\n";
    else
    {
        cout << "Podaj swój WPNW: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++)
            if (naaq[j] > you)
                ++count;
        cout << count;
        cout << " twoi sąsiedzi są bardziej podatni na wpływy\n"
             << "niż ty.\n";
    }
    return 0; 
}
