// peeker.cpp -- niektóre metody klasy istream
#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    // odczytuj i potwierdzaj znaki na ekranie aż do napotkania znaku #
    char ch;

    while(cin.get(ch))          // pętla przerywa wykonywanie po napotkaniu końca pliku
    {
        if (ch != '#')
            cout << ch;
        else
        {
            cin.putback(ch);    // wstaw znak z powrotem
            break;
        }
    }

    if (!cin.eof())
    {
        cin.get(ch);
        cout << endl << ch << " to następny znak wejściowy.\n";
    }
    else
    {
        cout << "Napotkano koniec pliku.\n";
        std::exit(0);
    }

    while(cin.peek() != '#')    // wcześniej sprawdź
    {
        cin.get(ch);
        cout << ch;
    }
    if (!cin.eof())
    {
        cin.get(ch);
        cout << endl << ch << " to następny znak wejściowy.\n";
    }
    else
        cout << "Napotkano koniec pliku.\n";

    return 0;
}

