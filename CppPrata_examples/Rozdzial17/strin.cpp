// strin.cpp -- odczyt formatowany z obiektu typu string
#include <iostream>
#include <sstream>
#include <string> 
int main()
{
    using namespace std;
    string lit = "dzień był ciemny i burzowy, lecz "
        " księżyc w pełni świecił żywym blaskiem.";
    istringstream instr(lit);        // użyj bufora do operacji wejścia
    string word;
    while (instr >> word)            // odczytuj po jednym słowie naraz
        cout << word << endl;
    return 0;
} 
