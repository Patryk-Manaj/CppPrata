// hexoct1.cpp -- pokazuje użycie literałów ósemkowych i szesnastkowych
#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    int chest = 42;     // dziesiętny literał całkowitoliczbowy
    int waist = 0x42;   // szesnastkowy literał całkowitoliczbowy
    int inseam = 042;   // ósemkowy literał całkowitoliczbowy

    cout << "Co za figura!\n";
    cout << "obwód piersi = " << chest << " (42 dziesiętnie)\n";
    cout << "talia = " << waist << " (0x42 szesnastkowo)\n";
    cout << "długość nogawki = " << inseam << " (042 ósemkowo)\n";
    return 0; 
}
