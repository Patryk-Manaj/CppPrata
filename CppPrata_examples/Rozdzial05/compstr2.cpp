// compstr2.cpp -- porównanie łańcuchów jako obiektów string
#include <iostream>
#include <string>     // klasa string
int main()
{
    using namespace std;
    string word = "?ate";

    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "Pętla się skończyła, słowo to " << word << endl;
    return 0; 
}
