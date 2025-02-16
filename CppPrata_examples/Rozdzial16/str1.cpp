// str1.cpp -- wprowadzenie do klasy string
#include <iostream>
#include <string>
// używanie konstruktorów klasy string

int main()
{
    using namespace std;
    string one("Zwycięzca loterii!"); // konstruktor nr 1
    cout << one << endl;              // przeciążony operator <<
    string two(20, '$');              // konstruktor nr 2
    cout << two << endl;
    string three(one);                // konstruktor nr 3
    cout << three << endl;
    one += " Ups!";                   // przeciążony operator +=
    cout << one << endl;
    two = "Przepraszam. To był ";
    three[10] = 'k';
    string four;                      // konstruktor nr 4
    four = two + three;               // przeciążone operatory + i =
    cout << four << endl;
    char alls[] = "Wszystko dobre, co się dobrze kończy";
    string five(alls, 22);            // konstruktor nr 5
    cout << five << "!\n";
    string six(alls + 9, alls + 14);  // konstruktor nr 6
    cout << six << ", ";
    string seven(&five[9], &five[14]); // ponownie konstruktor nr 6
    cout << seven << "...\n";
    string eight(four, 20, 9); // konstruktor nr 7
    cout << eight << " w akcji! " << endl;
    return 0;
}

