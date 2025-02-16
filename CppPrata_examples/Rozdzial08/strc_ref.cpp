// strc_ref.cpp -- użycie referencji do struktur
#include <iostream>
#include <string>

struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target, const free_throws & source);

int main()
{
    // inicjalizacje częściowe -- reszta składowych jest zerowana
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    free_throws four = {"Whily Looper", 5, 9};
    free_throws five = {"Long Long", 6, 14};
    free_throws team = {"Throwgoods", 0, 0};
    // bez inicjalizacji
    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);

    // wartości zwracane użyjemy w roli argumentów wywołania
    display(accumulate(team, two));
    accumulate(accumulate(team, three), four);
    display(team);

    // wartości zwracane użyte w przypisaniach:
    dup = accumulate(team,five);
    std::cout << "Statystyka dla team:\n";
    display(team);
    std::cout << "Statystyka dla dup po przypisaniu:\n";
    display(dup);
    set_pc(four);

    // źle skonstruowane przypisanie
    accumulate(dup,five) = four;
    std::cout << "Statystyka dla dup po omyłkowym przypisaniu:\n";
    display(dup);
    return 0;
}
void display(const free_throws & ft)
{
    using std::cout;
    cout << "Imię: " << ft.name << '\n';
    cout << "Trafionych: " << ft.made << '\t';
    cout << "Rzutów: " << ft.attempts << '\t';
    cout << "Skuteczność: " << ft.percent << '\n';
}
void set_pc(free_throws & ft)
{
    if (ft.attempts != 0)
        ft.percent = 100.0f *float(ft.made)/float(ft.attempts);
    else
        ft.percent = 0;
}
free_throws & accumulate(free_throws & target, const free_throws & source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}
