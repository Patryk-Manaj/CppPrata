// get_fun.cpp -- korzystanie z funkcji get() oraz getline()
#include <iostream>
const int Limit = 255;

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    char input[Limit];

    cout << "Wprowadź łańcuch znaków do funkcji getline():\n";
    cin.getline(input, Limit, '$');
    cout << "Oto Twoje dane:\n";
    cout << input << "\nKoniec etapu 1\n";

    char ch;
    cin.get(ch);
    cout << "Następny znak wejściowy to " << ch << endl;

    if (ch != '\n')
        cin.ignore(Limit, '\n');    // pomiń resztę wiersza

    cout << "Wprowadź łańcuch znaków do funkcji get():\n";
    cin.get(input, Limit, '$');
    cout << "Oto Twoje dane:\n";
    cout << input << "\nKoniec etapu 2\n";

    cin.get(ch);
    cout << " Następny znak wejściowy to " << ch << endl;

    return 0; 
}

