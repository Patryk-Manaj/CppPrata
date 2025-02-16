// memb_pt.cpp -- wyłuskiwanie wskaźników na składowe klasy
#include <iostream>
using namespace std;

class Example
{
    private:
        int feet;
        int inches;
    public:
        Example();
        Example(int ft);
        ~Example();
        void show_in() const;
        void show_ft() const;
        void use_ptr() const;
};

Example::Example()
{
    feet = 0;
    inches = 0;
}

Example::Example(int ft)
{
    feet = ft;
    inches = 12 * feet;
}

Example::~Example()
{
}

void Example::show_in() const
{
    cout << inches << " cali\n";
}

void Example::show_ft() const
{
    cout << feet << " stóp\n";
}

void Example::use_ptr() const
{
    Example yard(3);
    int Example::*pt;
    pt = &Example::inches;
    cout << "Ustaw wskaźnik pt na składową &Example::inches:\n";
    cout << "this->*pt: " << this->*pt << endl;
    cout << "yard.*pt: " << yard.*pt << endl;
    pt = &Example::feet;
    cout << "Ustaw wskaźnik pt na składową &Example::feet:\n";
    cout << "this->*pt: " << this->*pt << endl;
    cout << "yard.*pt: " << yard.*pt << endl;
    void (Example::*pf)() const;
    pf = &Example::show_in;
    cout << "Ustaw wskaźnik pf na metodę &Example::show_in:\n";
    cout << "Wywołanie (this->*pf)(): ";
    (this->*pf)();
    cout << "Wywołanie (yard.*pf)(): ";
    (yard.*pf)();
}

int main()
{
    Example car(15);
    Example van(20);

        cout << "Rezultat wywołania metody car.use_ptr():\n";
    car.use_ptr();
    cout << "\nRezultat wywołania metody van.use_ptr():\n";
    van.use_ptr();

    return 0;
}

