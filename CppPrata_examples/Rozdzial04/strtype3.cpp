// strtype3.cpp -- klasy string ciąg dalszy
#include <iostream>
#include <string>               // udostępnienie klasy string
#include <cstring>              // biblioteka obsługi łańcuchów z C
int main()
{
    using namespace std;
    char charr1[20]; 
    char charr2[20] = "jaguar"; 
    string str1;  
    string str2 = "pantera";

    // przypisanie obiektów string i tablic znakowych
    str1 = str2;                // kopiuje str2 do str1
    strcpy(charr1, charr2);     // kopiuje charr2 do charr1
 
    // łączy napis z tablicą znakową
    str1 += " makaron";         // dopisanie makaronu do str1
    strcat(charr1, " sok");     // dopisanie soku do charr1

    // określenie długości łańcucha
    int len1 = str1.size();     // określ długość str1
    int len2 = strlen(charr1);  // określ długość charr1
 
    cout << "Łańcuch " << str1 << " ma "
         << len1 << " znaków.\n";
    cout << "Łańcuch " << charr1 << " ma "
         << len2 << " znaków.\n";

    return 0; 
}
