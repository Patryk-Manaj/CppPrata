// stock10.cpp -- klasa Stock, z konstruktorami i destruktorem
#include <iostream>
#include "stock10.h"

// konstruktory (wersje "hałaśliwe")
Stock::Stock()                   // konstruktor domyślny
{
    std::cout << "Wywołano konstruktor domyślny\n";
    company = "bez nazwy";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    std::cout << "Wywołano konstruktor z argumentem " << co << "\n";
    company = co;

    if (n < 0)
    {
        std::cout << "Liczba udziałów nie może być ujemna; "
            << "ustalam liczbę udziałów w " << company << " na 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

// destruktor klasy
Stock::~Stock()
{
    std::cout << "Do widzenia, " << company << "!\n";
}

// pozostałe metody
void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Liczba nabywanych udziałów nie może być ujemna. "
            << "Transakcja przerwana.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    using std::cerr;

    if (num < 0)
    {
        cout << "Liczba sprzedawanych udziałów nie może być ujemna. "
            << "Transakcja przerwana.\n";
    }
    else if (num > shares)
    {
        cerr << "Nie możesz sprzedać więcej udziałów, niż posiadasz! "
            << "Transakcja przerwana.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::ios_base;
    // ustawienie formatu na #.###
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Spółka: " << company
        << "  Liczba udziałów: " << shares << '\n';
    cout << "  Cena udziału: " << share_val << " zł";
    // ustawienie formatu na #.##
    cout.precision(2);
    cout << " Łączna wartość udziałów: " << total_val << " zł" << '\n';
    // przywrócenie poprzedniego formatu
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

