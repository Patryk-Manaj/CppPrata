// block.cpp -- użycie instrukcji złożonej (bloku)
#include <iostream>
int main()
{
    using namespace std;
    cout << "Cudowny Kalkulator będzie sumował i liczył średnią ";
    cout << "pięciu liczb.\n";
    cout << "Proszę podać pięć wartości:\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; i++)
    {                                   // początek bloku
        cout << "Wartość " << i << ": ";
        cin >> number;
        sum += number;
    }                                   // koniec bloku
    cout << "Doprawdy, pięć wspaniałych liczb! ";
    cout << "Ich suma to " << sum << "," << endl;
    cout << "a średnia " << sum / 5 << ".\n";
    cout << "Cudowny Kalkulator żegna się z Tobą!\n";
    return 0; 
}
