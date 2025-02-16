// nested.cpp -- używa kolejki z klasą zagnieżdżoną
#include <iostream>
#include <string>
#include "queuetp.h"

int main()
{
    using std::string;
    using std::cin;
    using std::cout;

    QueueTP<string> cs(5);
    string temp;

    while(!cs.isfull())
    {
        cout << "Wpisz swoje imię i nazwisko. Zostaniesz obsłużona/y "
            "według kolejności przybycia.\n"
            "Imię i nazwisko: ";
        getline(cin, temp);
        cs.enqueue(temp);
    }
    cout << "Kolejka jest pełna. Rozpoczynamy przetwarzanie!\n";

    while (!cs.isempty())
    {
        cs.dequeue(temp);
        cout << "Teraz obsługujemy " << temp << "...\n";
    }
    return 0;
}

