// bondini.cpp -- użycie znaków specjalnych
#include <iostream>
int main()
{
    using namespace std;
    cout << "\aOperacja \"HyperHype\" została uruchomiona!\n";
    cout << "Podaj swój kod agenta:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aPodałeś " << code << "...\n";
    cout << "\aKod poprawny! Proszę realizować plan Z3!\n";
    return 0; 
}
