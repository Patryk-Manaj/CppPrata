// smrtptrs.cpp -- stosowanie trzech rodzajów inteligentnych wskaźników
// wymaga obsługi C++11, a przynajmniej klas shared_ptr i unique_ptr
#include <iostream>
#include <string>
#include <memory>

class Report
{
    private:
        std::string str;
    public:
        Report(const std::string s) : str(s)
    { std::cout << "Obiekt utworzony!\n"; }
        ~Report() { std::cout << "Obiekt usunięty!\n"; }
        void comment() const { std::cout << str << "\n"; }
};

int main()
{
    {
        std::auto_ptr<Report> ps (new Report("ze wskaźnikiem auto_ptr"));
        ps->comment(); // -> służy do wywołania metody obiektu przez wskaźnik
    }
    {
        std::shared_ptr<Report> ps (new Report("ze wskaźnikiem shared_ptr"));
        ps->comment();
    }
    {
        std::unique_ptr<Report> ps (new Report("ze wskaźnikiem unique_ptr"));
        ps->comment();
    }
    return 0;
}

