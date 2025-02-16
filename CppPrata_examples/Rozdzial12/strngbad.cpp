// strngbad.cpp -- implementacje metod klasy StringBad
#include <cstring>         // albo, gdzieniegdzie, string.h
#include "strngbad.h"
using std::cout;

// inicjalizacja statycznej składowej klasy
int StringBad::num_strings = 0;

// metody klasy
// konstruuje obiekt StringBad na bazie ciągu języka C
StringBad::StringBad(const char * s)
{
    len = std::strlen(s);    // ustalenie rozmiaru
    str = new char[len + 1]; // przydział odpowiedniej ilości pamięci
    std::strcpy(str, s);     // inicjalizacja wskaźnika
    num_strings++;           // uaktualnienie licznika obiektów
    cout << num_strings << ": \"" << str
        << "\" - obiekt utworzony.\n"; // komunikat diagnostyczny
}

StringBad::StringBad() // konstruktor domyślny
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");          // ciąg domyślny
    num_strings++;
    cout << num_strings << ": \"" << str
        << "\" - obiekt domyślny utworzony.\n"; // komunikat diagnostyczny
}

StringBad::~StringBad() // niezbędny teraz destruktor
{
    cout << "\"" << str << "\" - obiekt usunięty, ";    // diagnostyka
    --num_strings;                                      // konieczność
    cout << "są jeszcze " << num_strings << ".\n"; // diagnostyka
    delete [] str;                                      // konieczność
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}

