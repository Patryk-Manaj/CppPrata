// textin3.cpp -- wczytywanie znaków do końca pliku
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);        // próba odczytania znaku
    while (cin.fail() == false)  // sprawdzenie EOF
    {
        cout << ch;     // pokazanie znaku
        ++count;
        cin.get(ch);    // próba odczytania kolejnego znaku
    }
    cout << endl << "wczytano " << count << " znaków\n";
    return 0; 
}
