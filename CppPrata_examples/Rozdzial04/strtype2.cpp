// strtype2.cpp -- przypisanie, dodawanie i dołączanie
#include <iostream>
#include <string>               // udostępnienie klasy string
int main()
{
    using namespace std;
    string s1 = "pingwin";
    string s2, s3;

    cout << "Jeden obiekt można przypisać innemu: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "Obiektowi string można przypisać łańcuch w konwencji C.\n";
    cout << "s2 = \"myszołów\"\n";
    s2 = "myszołów";
    cout << "s2: " << s2 << endl;
    cout << "Można łączyć dwa łańcuchy string: s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << "Można dodawać łańcuchy.\n";
    s1 += s2;
    cout <<"s1 += s2 daje s1 = " << s1 << endl;
    s2 += " na dzień";
    cout <<"s2 += \" na dzień\" daje s2 = " << s2 << endl;

    return 0; 
}
