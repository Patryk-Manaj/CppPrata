// strtype1.cpp -- użycie klasy C++ string
#include <iostream>
#include <string>               // udostępnienie klasy string
int main()
{
    using namespace std;
    char charr1[20];            // utworzenie pustej tablicy
    char charr2[20] = "jaguar"; // utworzenie tablicy zainicjalizowanej
    string str1;                // utworzenie pustego obiektu string
    string str2 = "pantera";    // utworzenie zainicjalizowanego obiektu string

    cout << "Podaj gatunek kota: ";
    cin >> charr1;
    cout << "Podaj inny gatunek kota: ";
    cin >> str1;                // wprowadzanie danych za pomocą cin
    cout << "Oto wybrane kotowate:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2 // pokazywanie danych za pomocą cout
         << endl;
    cout << "Trzecia litera w słowie " << charr2 << " to "
         << charr2[2] << endl;
    cout << "Trzecia litera w słowie " << str2 << " to "
         << str2[2] << endl;    // użycie zapisu tablicowego

    return 0; 
}
