// sumafile.cpp -- funkcje mające tablicę za parametr
#include <iostream>
#include <fstream>          // wejście-wyjście przez pliki
#include <cstdlib>          // funkcja exit()
const int SIZE = 60;
int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;        // obiekt obsługujący odczyt z pliku

    cout << "Podaj nazwę pliku z danymi: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);  // połączenie inFile z plikiem
    if (!inFile.is_open())  // nieudana próba otwarcia pliku
    {
        cout << "Otwarcie pliku " << filename << " nie powiodło się.\n";
        cout << "Program zostanie zakończony.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;          // liczba elementów do odczytu

    inFile >> value;        // pobierz pierwszą wartość
    while (inFile.good())   // póki dobre dane i nie EOF
    {
        ++count;            // wczytano kolejną daną
        sum += value;       // obliczenie bieżącej sumy
        inFile >> value;    // pobranie następnej wartości
    }
    if (inFile.eof())
        cout << "Koniec pliku.\n";
    else if (inFile.fail())
        cout << "Wczytywanie danych przerwane - błąd.\n";
    else
        cout << "Wczytywanie danych przerwane, przyczyna nieznana.\n";
    if (count == 0)
        cout << "Nie przetworzono żadnych danych.\n";
    else
    {
        cout << "Wczytanych elementów: " << count << endl;
        cout << "Suma: " << sum << endl;
        cout << "Średnia: " << sum / count << endl;
    }
    inFile.close();         // plik już niepotrzebny
    return 0;
}
