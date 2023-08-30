#include <iostream>
using namespace std;
#include "string2.h"

int main()
{
    String s1(" and i learn C++.");
    String s2 = "What is your name: "; 
    String s3; 
    cout << s2; 
    cin >> s3; 
    s2 = "My name is " + s3;
    cout << s2 << ".\n";
    s2 = s2 + s1;
    s2.stringup();
    cout << "String\n" << s2 << "\nzawiera " << s2.has('A') << " 'A'.\n";
    s1 = "red";
    String rgb[3] = {String(s1), String("green"), String("blue")};
    cout << "Enter the name the primary color: ";
    String ans; 
    bool success = false; 
    while (cin >> ans)
    {
        ans.stringlow();
        for(int i = 0; i < 3; i++)
        {
            if (ans == rgb[i])
            {
                cout << "Correct!\n";
                success = true; 
                break; 
            }
        }
        if (success)
            break; 
        else
            cout << "Try again!\n";
    }
    cout << "Bye!";
    return 0;
}