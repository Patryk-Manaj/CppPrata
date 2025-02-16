// forstr1.cpp -- użycie pętli for z klasą string
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout << "Podaj słowo: ";
    string word;
    cin >> word;

    // wyświetlanie liter od końca
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << "\nDo widzenia.\n";
    return 0; 
}
