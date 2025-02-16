// modulus.cpp -- używa operatora % do zamiany funtów na kamienie
#include <iostream>
int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Podaj swoją wagę w funtach: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;      // całych kamieni
    int pounds = lbs % Lbs_per_stn;     // reszta w funtach
    cout << lbs << " funtów to " << stone
         << " kamieni, " << pounds << " funt(ów).\n";
    return 0; 
}
