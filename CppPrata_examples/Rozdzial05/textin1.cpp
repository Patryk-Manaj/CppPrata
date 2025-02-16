// textin1.cpp -- wczytywanie znaków w pętli while
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;      // najprostsza metod wprowadzania
    cout << "Podawaj znaki; # kończy wprowadzanie:\n";
    cin >> ch;          // pobierz znak
    while (ch != '#')   // sprawdź znak
    {
        cout << ch;     // wyświetl znak na ekranie
        ++count;        // dolicz znak
        cin >> ch;      // pobierz następny znak
    }
    cout << endl << " wczytano " << count << " znaków\n";
    return 0; 
}
