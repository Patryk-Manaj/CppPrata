// strquote.cpp  -- różne techniki programowania
#include <iostream>
#include <string>
using namespace std;
string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);  // efekty uboczne
const string & version3(string & s1, const string & s2);  // zła technika
 
int main()
{
    string input;
    string copy;
    string result;

    cout << "Podaj łańcuch: ";
    getline(cin, input);
    copy = input;
    cout << "Wprowadzony łańcuch: " << input << endl;
    result = version1(input, "***");
    cout << "Łańcuch po wzbogaceniu: " << result << endl;
    cout << "Oryginalny łańcuch: " << input << endl;
 
    result = version2(input, "###");
    cout << "Łańcuch po wzbogaceniu: " << result << endl;
    cout << "Oryginalny łańcuch: " << input << endl;

    cout << "Przywrócenie oryginalnego łańcucha.\n";
    input = copy;
    result = version3(input, "@@@");
    cout << "Łańcuch po wzbogaceniu: " << result << endl;
    cout << "Oryginalny łańcuch: " << input << endl;

    return 0;
}

string version1(const string & s1, const string & s2)
{
    string temp;

    temp = s2 + s1 + s2;
    return temp;
}

const string & version2(string & s1, const string & s2)   // efekty uboczne
{
    s1 = s2 + s1 + s2;
// można bezpiecznie zwrócić referencję przekazaną do funkcji
    return s1; 
}

const string & version3(string & s1, const string & s2)   // zła technika
{
    string temp;

    temp = s2 + s1 + s2;
// zwracanie referencji do obiektu lokalnego jest niebezpieczne
    return temp;

}
