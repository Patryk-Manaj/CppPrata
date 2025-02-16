// compstr1.cpp -- porównanie łańcuchów jako tablic
#include <iostream>
#include <cstring>     // prototyp funkcji strcmp()
int main()
{
    using namespace std;
    char word[5] = "?ate";

    for (char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "Pętla się skończyła, słowo to " << word << endl;
    return 0; 
}
