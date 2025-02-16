// append.cpp -- dołączanie danych do pliku
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>        // ze względu na funkcję exit()

const char * file = "goscie.txt";
int main()
{
    using namespace std;
    char ch;

    // pokaż początkową zawartość
    ifstream fin;
    fin.open(file);

    if (fin.is_open())
    {
        cout << "Oto aktualna zawartość pliku "
            << file << ":\n";
        while (fin.get(ch))
            cout << ch;
        fin.close();
    }

    // dodaj nowe osoby
    ofstream fout(file, ios_base::out | ios_base::app);
    if (!fout.is_open())
    {
        cerr << "Nie można otworzyć pliku " << file << " do zapisu.\n";
        exit(EXIT_FAILURE);
    }

    cout << "Podaj imiona i nazwiska gości (aby zakończyć, wprowadź pusty wiersz):\n";
    string name;
    while (getline(cin, name) && name.size() > 0)
    {
        fout << name << endl;
    }
    fout.close();

    // wyświetl zmieniony plik
    fin.clear();    // instrukcja nie jest konieczna w przypadku niektórych kompilatorów
    fin.open(file);
    if (fin.is_open())
    {
        cout << "Oto nowa zawartość pliku "
            << file << ":\n";
        while (fin.get(ch))
            cout << ch;
        fin.close();
    }
    cout << "Koniec.\n";
    return 0;
}

