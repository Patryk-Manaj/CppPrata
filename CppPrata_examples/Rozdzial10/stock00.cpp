// stock.cpp -- implementacja klasy Stock
// wersja 00
#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string & co, long n, double pr)
{
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
    if (num < 0)
    {
        cout << "Liczba sprzedawanych udziałów nie może być ujemna. "
            << "Transakcja przerwana.\n";
    }
    else if (num > shares)
    {
        cout << "Nie możesz sprzedać więcej udziałów, niż posiadasz! "
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
    std::cout << "Spółka: " << company
        << " Liczba udziałów: " << shares << '\n'
        << " Cena udziału: " << share_val << " zł"
        << " Łączna wartość udziałów: " << total_val << " zł" << '\n';
}

