// strctfun.cpp -- funkcje mające strukturę jako parametr
#include <iostream>
#include <cmath>

// deklaracje struktur
struct polar
{
    double distance;      // odległość od początku układu
    double angle;         // kąt względem dodatniej półosi x
};
struct rect
{
    double x;             // odległość od początku układu w poziomie
    double y;             // odległość od początku układu w pionie
};

// prototypy
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Podaj wartości x i y: ";
    while (cin >> rplace.x >> rplace.y)  // chytre użycie cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Podaj następne liczby lub q, aby zakończyć: ";
    }
    cout << "Gotowe.\n";
    return 0;
}

// zamienia współrzędne prostokątne na biegunowe
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;

    answer.distance =
        sqrt( xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;      // zwraca strukturę polar
}

// pokazuje współrzędne biegunowe, radiany przelicza na stopnie
void show_polar (polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "odległość = " << dapos.distance;
    cout << ", kąt = " << dapos.angle * Rad_to_deg;
    cout << " stopni\n";
}
