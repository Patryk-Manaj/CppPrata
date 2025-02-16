// outfile.cpp -- zapis do pliku
#include <iostream>
#include <fstream>                  // plikowe wejście-wyjście

int main()
{
    using namespace std;

    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;               // utworzenie obiektu na wyniki
    outFile.open("carinfo.txt");    // powiązanie obiektu z plikiem

    cout << "Podaj markę i model auta: ";
    cin.getline(automobile, 50);
    cout << "Podaj rok produkcji: ";
    cin >> year;
    cout << "Podaj cenę wyjściową: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

// za pomocą cout pokaż informacje na ekranie

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Marka i model: " << automobile << endl;
    cout << "Rok: " << year << endl;
    cout << "Cena wywoławcza w zł: " << a_price << endl;
    cout << "Cena bieżąca: " << d_price << endl;

// dokładnie to samo robimy z outFile zamiast cout

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Marka i model: " << automobile << endl;
    outFile << "Rok: " << year << endl;
    outFile << "Cena wywoławcza w zł: " << a_price << endl;
    outFile << "Cena bieżąca: " << d_price << endl;
    
    outFile.close();                // plik gotowy
    return 0;
}
