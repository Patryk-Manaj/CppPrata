// strgfun.cpp -- funkcje z łańcuchem znakowym jako parametrem
#include <iostream>
unsigned int c_in_str(const char * str, char ch);
int main()
{
    using namespace std;
    char mmm[15] = "minimum";    // łańcuch w tablicy
// w niektórych systemach trzeba poprzedzić słowo char słowem
// static, gdyż inaczej niemożliwa będzie inicjalizacja tablicy

    char *wail = "ululate";    // wail wskazuje łańcuch znakowy

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " znaków m w " << mmm << endl;
    cout << us << " znaków u w " << wail << endl;
    return 0;
}

// funkcja zlicza wystąpienia znaku ch w łańcuchu str
unsigned int c_in_str(const char * str, char ch)
{
    unsigned int count = 0;

    while (*str)        // koniec, gdy *str jest równe '\0'
    {
        if (*str == ch)
            count++;
        str++;        // przesuń wskaźnik na następny znak
    }
    return count; 
}
