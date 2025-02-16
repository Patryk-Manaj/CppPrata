// while.cpp -- wprowadzenie do pętli while
#include <iostream>
const int ArSize = 20;
int main()
{
    using namespace std;
    char name[ArSize];

    cout << "Proszę podać swoje imię: ";
    cin >> name;
    cout << "Oto Twoje imię, ustawione pionowo, jako kody ASCII:\n";
    int i = 0;                  // zaczynamy od początku łańcucha
    while (name[i] != '\0')     // przetwarzanie do końca łańcucha
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;                    // nie zapomnijmy o tym kroku
    }
    return 0; 
}
