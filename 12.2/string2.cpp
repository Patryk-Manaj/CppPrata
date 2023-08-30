// string1.cpp -- implementacje metod klasy String
#include <cstring>    // albo string.h
#include "string2.h"  // włącza plik nagłówkowy <iostream>
using std::cin;
using std::cout;

// inicjalizacja statycznej składowej klasy
int String::num_strings = 0;

// metoda statyczna
int String::HowMany()
{
    return num_strings;
}

// metody klasy
String::String(const char * s)          // konstruuje obiekt String z ciągu C
{
    len = std::strlen(s);               // ustawienie długości ciągu
    str = new char[len + 1];            // przydział pamięci
    std::strcpy(str, s);                // inicjalizacja wskaźnika ciągu
    num_strings++;                      // aktualizacja licznika obiektów
}

String::String()                        // konstruktor domyślny
{
    len = 4;
    str = new char[1];
    str[0] = '\0';                      // domyślny ciąg obiektów klasy
    num_strings++;
}

String::String(const String & st)
{
    num_strings++;                      // aktualizacja składowej statycznej
    len = st.len;                       // ta sama długość ciągu
    str = new char [len + 1];           // przydział pamięci
    std::strcpy(str, st.str);           // skopiowanie ciągu
}

String::~String()                        // destruktor (niezbędny)
{
    --num_strings;                       // koniecznie
    delete [] str;                       // koniecznie
}

// metody przeciążające operatory
// przypisywanie obiektu klasy String do innego obiektu tej klasy
String & String::operator=(const String & st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

// przypisywanie ciągu C do obiektu klasy String
String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

// pełny dostęp do znaków ciągu (dla obiektów zwykłych)
char & String::operator[](int i)
{
    return str[i];
}

// dostęp (do odczytu) do znaków ciągu (dla obiektów const)
const char & String::operator[](int i) const
{
    return str[i];
}

// zaprzyjaźnione funkcje przeciążające operatory
bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

// wyprowadzenie ciągu na wyjście
ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os;
}

// wczytywanie ciągu z wejścia (uproszczone)
istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

String operator+(const char * s, const String & s2)
{
    String temp;
    temp.len = strlen(s) + s2.len;
    temp.str = new char[temp.len + 1];  // +1 for the null terminator
    strcpy(temp.str, s);
    strcat(temp.str, s2.str);
    return temp;
}

String operator+(const String & s1, const String & s2)
{
    String temp; 
    temp.len = s1.len + s2.len;
    temp.str = new char[temp.len + 1]; 
    strcpy(temp.str, s1.str); 
    strcat(temp.str, s2.str);
    return temp; 
}

void String::stringup()
{
    for(int i = 0; i < len; i++)
    {
        str[i] = toupper(str[i]); 
    }
}

void String::stringlow()
{
    for(int i = 0; i < len; i++)
    {
        str[i] = tolower(str[i]); 
    }
}

int String::has(char c)
{
    int count = 0; 
    for (int i = 0; i < len; i++)
    {
        if (str[i] == c)
            ++count;
    }
    return count; 
}

