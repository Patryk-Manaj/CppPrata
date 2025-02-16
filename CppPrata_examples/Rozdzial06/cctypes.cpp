// cctypes.cpp--użycie biblioteki ctype.h
#include <iostream>
#include <cctype>              // prototypu funkcji obsługi znaków
int main()
{
    using namespace std;
    cout << "Podaj tekst do analizy, zakończ go,"
            " wpisując znak @.\n";
    char ch;  
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);                // pobierz pierwszy znak
    while(ch != '@')            // sprawdź, czy to nie „małpka”
    {
        if(isalpha(ch))         // czy to litera?
            chars++;
        else if(isspace(ch))    // czy to biały znak?
            whitespace++;
        else if(isdigit(ch))    // czy to cyfra?
            digits++;
        else if(ispunct(ch))    // czy to znak przestankowy?
            punct++;
        else
            others++;
        cin.get(ch);            // pobierz następny znak
    }
    cout << chars << " liter, "
         << whitespace << " białych znaków, "
         << digits << " cyfr, "
         << punct << " znaków przestankowych, "
         << others << " innych znaków.\n";
    return 0; 
}
