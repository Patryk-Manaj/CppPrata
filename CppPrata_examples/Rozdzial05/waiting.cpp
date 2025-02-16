// waiting.cpp -- funkcja clock() w pętli opóźniającej
#include <iostream>
#include <ctime> // zawiera deklarację funkcji clock() i typu clock_t
int main()
{
    using namespace std;
    cout << "Podaj czas opóźnienia w sekundach: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;  // konwersja na jednostki zegara
    cout << "zaczynamy\a\n";
    clock_t start = clock();
    while (clock() - start < delay )        // czekaj, aż upłynie czas
        ;                                   // uwaga na średnik
    cout << "gotowe \a\n";
    return 0; 
}
