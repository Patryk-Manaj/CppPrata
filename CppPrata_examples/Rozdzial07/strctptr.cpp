// strctptr.cpp -- funkcje ze wskaźnikami struktur jako parametrami
#include <iostream>
#include <cmath>

// szablony struktur
struct polar
{
    double distance;      // odległość od początku układu
    double angle;         // kierunek względem dodatniej półosi x
};
struct rect
{
    double x;             // odległość od początku układu w poziomie
    double y;             // odległość od początku układu w pionie
};

// prototypy
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar (const polar * pda);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Podaj wartości x i y: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);    // przekaż adres
        show_polar(&pplace);                // przekaż adres
        cout << "Następna para liczb lub q, aby zakończyć: ";
    }
    cout << "Gotowe.\n";
    return 0;
}

// pokazuje współrzędne biegunowe, zamienia radiany na stopnie
void show_polar (const polar * pda)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "odległość = " << pda->distance;
    cout << ", kąt = " << pda->angle * Rad_to_deg;
    cout << " stopni\n";
}

// zamiana współrzędnych prostokątnych na biegunowe
void rect_to_polar(const rect * pxy, polar * pda)
{
    using namespace std;
    pda->distance =
        sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}
