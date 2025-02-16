// usett1.cpp -- korzystanie z klasy bazowej oraz klasy pochodnej
#include <iostream>
#include "tabtenn1.h"

int main ( void )
{
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Teresa", "Bogatko", false);
    RatedPlayer rplayer1(1140, "Maciej", "Kaczkowski", true);
    rplayer1.Name(); // obiekt klasy pochodnej korzysta z metody klasy bazowej
    if (rplayer1.HasTable())
        cout << ": posiada stół.\n";
    else
        cout << ": nie posiada stołu.\n";
    player1.Name(); // obiekt klasy bazowej korzysta z metody klasy bazowej
    if (player1.HasTable())
        cout << ": posiada stół.\n";
    else
        cout << ": nie posiada stołu.\n";
    cout << "Nazwisko i imię: ";
    rplayer1.Name();
    cout << "; Ranking: " << rplayer1.Rating() << endl;
    // inicjalizacja obiektu klasy RatedPlayer obiektem klasy TableTennisPlayer
    RatedPlayer rplayer2(1212, player1);
    cout << "Nazwisko i imię: ";
    rplayer2.Name();
    cout << "; Ranking: " << rplayer2.Rating() << endl;

    return 0;
}

