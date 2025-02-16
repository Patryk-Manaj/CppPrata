// worker0.cpp -- metody klas hierarchii
#include "worker0.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
// metody klasy Worker

// potrzebna implementacja destruktora wirtualnego, nawet jeśli jest on czysto wirtualny
Worker::~Worker() {}

void Worker::Set()
{
    cout << "Podaj imię i nazwisko pracownika: ";
    getline(cin, fullname);
    cout << "Podaj numer identyfikacyjny pracownika: ";
    cin >> id;
    while (cin.get() != '\n')
        continue;
}

void Worker::Show() const
{
    cout << "Imię i nazwisko: " << fullname << "\n";
    cout << "Numer identyfikacyjny: " << id << "\n";
}

// metody klasy Waiter
void Waiter::Set()
{
    Worker::Set();
    cout << "Podaj poziom elegancji kelnera: ";
    cin >> panache;
    while (cin.get() != '\n')
        continue;
}

void Waiter::Show() const
{
    cout << "Kategoria: kelner\n";
    Worker::Show();
    cout << "Elegancja: " << panache << "\n";
}

// metody klasy Singer
const char * Singer::pv[] = {"inny", "alt", "kontralt", "sopran",
    "bas", "baryton", "tenor"};

void Singer::Set()
{
    Worker::Set();
    cout << "Podaj numer skali głosu piosenkarza:\n";
    int i;
    for (i = 0; i < Vtypes; i++)
    {
        cout << i << ": " << pv[i] << "   ";
        if (i % 4 == 3)
            cout << endl;
    }
    if (i % 4 != 0)
        cout << endl;
    while (cin >> voice && (voice < 0 || voice >= Vtypes) )
        cout << "Podaj wartość nieujemną i mniejszą od " << Vtypes << endl;
    while (cin.get() != '\n')
        continue;
}

void Singer::Show() const
{
    cout << "Kategoria: piosenkarz\n";
    Worker::Show();
    cout << "Skala głosu: " << pv[voice] << endl;
}

