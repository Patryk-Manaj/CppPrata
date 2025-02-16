// strtype4.cpp -- wprowadzanie danych wierszami
#include <iostream>
#include <string>               // udostępnienie klasy string
#include <cstring>              // biblioteka łańcuchów w stylu C
int main()
{
    using namespace std;
    char charr[20]; 
    string str;

    cout << "Długość łańcucha w zmiennej charr przed wprowadzeniem danych: "
         << strlen(charr) << endl;
    cout << "Długość łańcucha w zmiennej str przed wprowadzeniem danych: "
         << str.size() << endl;
    cout << "Wprowadzenie wiersza tekstu:\n";
    cin.getline(charr, 20);     // określenie maksymalnej długości
    cout << "Wprowadzono: " << charr << endl;
    cout << "Podaj kolejny wiersz tekstu:\n";
    getline(cin, str);          // cin jest parametrem, nie podano długości
    cout << "Wprowadzono: " << str << endl;
    cout << "Długość łańcucha w zmiennej charr po wprowadzeniu danych: "
         << strlen(charr) << endl;
    cout << "Długość łańcucha w zmiennej str po wprowadzeniu danych: "
         << str.size() << endl;

    return 0; 
}
