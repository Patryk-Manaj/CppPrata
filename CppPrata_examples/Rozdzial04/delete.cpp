// delete.cpp -- użycie operatora delete
#include <iostream>
#include <cstring>      // lub string.h
using namespace std;
char * getname(void);   // prototyp funkcji
int main()
{
    char * name;        // utworzenie wskaźnika bez przypisanej pamięci

    name = getname();   // przypisanie zmiennej name adresu łańcucha
    cout << name << " pod adresem " << (int *) name << "\n";
    delete [] name;     // zwolnienie pamięci

    name = getname();   // ponowne użycie zwolnionej pamięci
    cout << name << " pod adresem " << (int *) name << "\n";
    delete [] name;     // ponowne zwolnienie pamięci
    return 0;
}

char * getname()        // zwraca wskaźnik na nowy łańcuch
{
    char temp[80];      // tymczasowy bufor
    cout << "Podaj nazwisko: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);   // kopiowanie łańcucha do krótszej tablicy

    return pn;          // po zakończeniu funkcji temp zostanie utracone
}
