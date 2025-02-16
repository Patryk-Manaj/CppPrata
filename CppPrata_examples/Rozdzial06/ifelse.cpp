// ifelse.cpp -- użycie instrukcji if else
#include <iostream>
int main()
{
    char ch;

    std::cout << "Pisz, a ja będę powtarzać.\n";
    std::cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
            std::cout << ch;     // jeśli znak nowego wiersza
        else
            std::cout << ++ch;   // dla wszystkich innych znaków
        std::cin.get(ch);
    }
// Ciekawy efekt można uzyskać, pisząc ch + 1 zamiast ++ch.
    std::cout << "\nProszę wybaczyć drobne niedoróbki.\n";
       // std::cin.get();
       // std::cin.get();
    return 0;
}
