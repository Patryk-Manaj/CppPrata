// brass.cpp -- metody klas do obsługi rachunków
#include <iostream>
#include "brass.h"
using std::cout;
using std::endl;
using std::string;
// oprzyrządowanie do formatowania napisów
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);
// metody klasy Brass

Brass::Brass(const string & s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt)
{
    if (amt < 0)
        cout << "Nie można wpłacić ujemnej kwoty; "
            << "Wpłata anulowana.\n";
    else
        balance += amt;
}

void Brass::Withdraw(double amt)
{
    // ustawienie formatu na ###.##
    format initialState = setFormat();
    precis prec = cout.precision(2);
    if (amt < 0)
        cout << "Nie można wypłacić ujemnej kwoty; "
            << "Wypłata anulowana.\n";
    else if (amt <= balance)
        balance -= amt;
    else
        cout << "Żądana suma " << amt 
            << " zł przekracza dostępne środki.\n"
            << "Wypłata anulowana.\n";
    restore(initialState, prec);
}

double Brass::Balance() const
{
    return balance;
}

void Brass::ViewAcct() const
{
    // ustawia format ###.##
    format initialState = setFormat();
    precis prec = cout.precision(2);
    cout << "Klient: " << fullName << endl;
    cout << "Numer rachunku: " << acctNum << endl;
    cout << "Stan konta: " << balance << " zł" << endl;
    restore(initialState, prec); // przywraca początkowy format
}

// metody klasy BrassPlus
BrassPlus::BrassPlus(const string & s, long an, double bal,
        double ml, double r) : Brass(s, an, bal)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

    BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
: Brass(ba) // używa niejawnego konstruktora kopiującego
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

// nowa definicja metody ViewAcct()
void BrassPlus::ViewAcct() const
{
    // ustawia format ###.##
    format initialState = setFormat();
    precis prec = cout.precision(2);

    Brass::ViewAcct(); // wyświetla część z klasy bazowej
    cout << "Limit debetu: " << maxLoan << "zł" << endl;
    cout << "Kwota zadłużenia: " << owesBank << "zł" << endl;
    cout.precision(3); // ustawienie formatu na ###.###
    cout << "Stopa oprocentowania: " << 100 * rate << "%\n";
    restore(initialState, prec);
}

// nowa definicja metody Withdraw()
void BrassPlus::Withdraw(double amt)
{
    // ustawia format ###.##
    format initialState = setFormat();
    precis prec = cout.precision(2);

    double bal = Balance();
    if (amt <= bal)
        Brass::Withdraw(amt);
    else if ( amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Zadłużenie faktyczne: " << advance << "zł" << endl;
        cout << "Odsetki: " << advance * rate << "zł" << endl;
        Deposit(advance);
        Brass::Withdraw(amt);
    }
    else
        cout << "Przekroczony limit debetu. Operacja anulowana.\n";
    restore(initialState, prec);
}

format setFormat()
{
    // ustawienie formatu na ###.##
    return cout.setf(std::ios_base::fixed,
            std::ios_base::floatfield);
}
void restore(format f, precis p)
{
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}

