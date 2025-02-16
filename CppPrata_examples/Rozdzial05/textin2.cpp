// textin2.cpp -- użycie cin.get(char)
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;

    cout << "Podawaj znaki; znak # kończy: \n";
    cin.get(ch);        // użycie funkcji cin.get(ch)
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);    // ponowne użycie
    }
    cout << endl << "wczytano " << count << " znaków\n";
    return 0; 
}
