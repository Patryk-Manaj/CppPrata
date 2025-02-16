// strgback.cpp -- funkcja zwracająca wskaźnik char
#include <iostream>
char * buildstr(char c, int n);     // prototyp
int main()
{
    using namespace std;
    int times;
    char ch;

    cout << "Podaj znak: ";
    cin >> ch;
    cout << "Podaj liczbę całkowitą: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;                   // zwolnij pamięć
    ps = buildstr('+', 19);         // ponowne użycie wskaźnika
    cout << ps << "-GOTOWE-" << ps << endl;
    delete [] ps;                   // zwolnij pamięć
    return 0;
}

// tworzenie łańcucha z n wystąpień znaku c
char * buildstr(char c, int n)
{
    char * pstr = new char[n + 1];
    pstr[n] = '\0';         // zakończ łańcuch
    while (n-- > 0)
        pstr[n] = c;        // dopełnienie łańcucha
    return pstr; 
}
