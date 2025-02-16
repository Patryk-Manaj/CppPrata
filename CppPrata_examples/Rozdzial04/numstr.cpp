// numstr.cpp -- wczytywanie wiersza danych po liczbie
#include <iostream>
int main()
{
    using namespace std;
    cout << "W którym roku zbudowano twój dom?\n";
    int year;
    cin >> year;
    cout << "Przy jakiej ulicy mieszkasz?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Rok budowy: " << year << endl;
    cout << "Adres: " << address << endl;
    cout << "Gotowe!\n";
    return 0; 
}
