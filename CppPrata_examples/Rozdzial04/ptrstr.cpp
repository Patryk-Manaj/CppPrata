// ptrstr.cpp -- wskaźniki i łańcuchy znakowe
#include <iostream>
#include <cstring>              // declare strlen(), strcpy()
int main()
{
    using namespace std;
    char animal[20] = "niedźwiedź"; // zmienna animal zawiera łańcuch niedźwiedź
    const char * bird = "myszołów"; // stała bird zawiera adres łańcucha
    char * ps;                  // niezainicjalizowane

    cout << animal << " oraz ";  // wyświetl niedźwiedzia
    cout << bird << "\n";       // wyświetl myszołowa
    cout << ps << "\n";         // może pokazać śmieci, może zawiesić program

    cout << "Podaj rodzaj zwierzęcia: ";
    cin >> animal;              // OK, o ile < 20 znaków
    // cin >> ps; Zbyt straszne, żeby nawet próbować - ps nie wskazuje
    //            zaalokowanej pamięci

    ps = animal;                // ustawienie ps na łańcuch
    cout << ps << "i!\n";      // OK, to samo co użycie animal
    cout << "Przed użyciem strcpy():\n";
    cout << animal << " pod adresem " << (int *) animal << endl;
    cout << ps << " pod adresem " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];  // alokujemy nową pamięć
    strcpy(ps, animal);         // kopiowanie łańcucha w nowe miejsce
    cout << "Po użyciu strcpy():\n";
    cout << animal << " pod adresem " << (int *) animal << endl;
    cout << ps << " pod adresem " << (int *) ps << endl;
    delete [] ps;
    return 0; 
}
