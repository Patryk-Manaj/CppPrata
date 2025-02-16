// strout.cpp -- formatowanie wewnętrzne (wyjście)
#include <iostream>
#include <sstream> 
#include <string> 
int main()
{
    using namespace std;
    ostringstream outstr;    // zarządza strumieniem typu string
    
    string hdisk;
    cout << "Jak się nazywa Twój dysk twardy? ";
    getline(cin, hdisk);
    int cap;
    cout << "Jaka jest jego pojemność w GB? ";
    cin >> cap;
    // zapisz informacje sformatowane w strumieniu typu string
    outstr << "Dysk twardy " << hdisk << " ma pojemność "
            << cap << " gigabajtów.\n";    
    string result = outstr.str();    // zapisz wynik
    cout << result;                  // wyświetl zawartość
    
    return 0;
} 
