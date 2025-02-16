// fileio.cpp -- zapis do pliku
#include <iostream>    // niepotrzebne w przypadku większości systemów
#include <fstream>
#include <string>

int main()
{
    using namespace std;
    string filename;

    cout << "Podaj nazwę dla nowego pliku: ";
    cin >> filename;

    // utwórz dla nowego pliku obiekt strumienia wyjściowego i nazwij go fout
    ofstream fout(filename.c_str());

    fout << "Tylko dla Twoich oczu!\n";     // zapisz do pliku
    cout << "Podaj swój tajny numer: ";     // wypisz na ekranie
    float secret;
    cin >> secret;
    fout << "Twój tajny numer to " << secret << endl;
    fout.close();            // zamknij plik

    // utwórz dla nowego pliku obiekt strumienia wejściowego i nazwij go fin
    ifstream fin(filename.c_str());
    cout << "Oto zawartość pliku " << filename << ":\n";
    char ch;
    while (fin.get(ch))      // odczytaj znak z pliku i
        cout << ch;          // wypisz go na ekranie
    cout << "Gotowe\n";
    fin.close();

    return 0;
}

