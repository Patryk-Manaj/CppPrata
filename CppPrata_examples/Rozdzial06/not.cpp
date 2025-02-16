// not.cpp -- użycie operatora not
#include <iostream>
#include <climits>
bool is_int(double); 
int main()
{
    using namespace std;
    double num;

    cout << "Hej, koleś! Rzuć no liczbą całkowitą: ";
    cin >> num;
    while (!is_int(num))    // tak długo, aż uzyskamy liczbę dającą
    {                       // się przypisać do typu int
        cout << "Poza zakresem - próbuj dalej: ";
        cin >> num;
    }
    int val = int (num);    // rzutowanie typu
    cout << "Podana liczba całkowita to " << val << "\nBywaj\n";
    return 0;
}

bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN)   // użycie wartości z climits
        return true;
    else
        return false; 
}
