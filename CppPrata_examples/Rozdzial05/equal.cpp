// equal.cpp -- równość i przypisanie
#include <iostream>
int main()
{
    using namespace std;
    int quizscores[10] =
        { 20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

    cout << "Bezbłędnie:\n";
    int i;
    for (i = 0; quizscores[i] == 20; i++)
        cout << "test " << i << " ma wartość 20\n";
// UWAGA: ten fragment programu lepiej analizować niż uruchamiać
    cout << "Robi się niebezpiecznie:\n";
    for (i = 0; quizscores[i] = 20; i++)
        cout << "test " << i << "  ma wartość 20\n";

    return 0;
}
