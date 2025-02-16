// newexcp.cpp -- wyjątek bad_alloc
#include <iostream>
#include <new>
#include <cstdlib> // potrzebne dla exit() i EXIT_FAILURE
using namespace std;

struct Big
{
    double stuff[20000];
};

int main()
{
    Big * pb;
    try {
        cout << "Próba przydziału wielkiego bloku pamięci:\n";
        pb = new Big[10000]; // 1 600 000 000 bajtów
        cout << "Udało się przebrnąć przez instrukcję new:\n";
    }
    catch (bad_alloc & ba)
    {
        cout << "Przechwyciłem wyjątek!\n";
        cout << ba.what() << endl;
        exit(EXIT_FAILURE);
    }
    cout << "Udało się przydzielić pamięć \n";
    pb[0].stuff[0] = 4;
    cout << pb[0].stuff[0] << endl;
    delete [] pb;
    return 0;
}

