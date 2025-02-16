// more_and.cpp -- użycie operatora logicznej koniunkcji
#include <iostream>
const char * qualify[4] =       // tablica wskaźników łańcuchów
{
    "bieg na 10km.\n",
    "przeciąganie liny w błocie.\n",
    "pojedynek mistrzów canoe.\n",
    "festiwal rzucania plackiem.\n"
};
int main()
{
    using namespace std;
    int age;
    cout << "Podaj swój wiek: ";
    cin >> age;
    int index;
    if (age > 17 && age < 35)
        index = 0;
    else if (age >= 35 && age < 50)
        index = 1;
    else if (age >= 50 && age < 65)
        index = 2;
    else
        index = 3;

    cout << "Kwalifikujesz się do konkurencji " << qualify[index]; 
    return 0;
}
