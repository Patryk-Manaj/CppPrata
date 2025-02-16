// nested.cpp -- pętle zagnieżdżone i tablica 2-wymiarowa
#include <iostream>
#include <string>
#include <array>
const int Cities = 5;
const int Years = 4;
int main()
{
    using namespace std;
    const string cities[Cities] =   // tablica wskaźników
    {                               // 5-ciu łańcuchów
        "Jelenia Góra",
        "Zielona Góra",
        "Stara Góra",
        "Górki",
        "Wilga Górna"
    };
    array<array<int,Cities>, Years> maxtemps =

    /* int maxtemps[Years][Cities] =   // tablica dwuwymiarowa */
    {{
        {32, 31, 32, 34, 29},    // wartości maxtemps[0]
        {28, 31, 31, 32, 30},    // wartości maxtemps[1]
        {31, 27, 29, 30, 33},    // wartości maxtemps[2]
        {30, 31, 29, 33, 32}    // wartości maxtemps[3]
    }};

    cout << "Temperatury maksymalne (C) w latach 2008-2011\n\n";
    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }
    // cin.get();
    return 0;
}
