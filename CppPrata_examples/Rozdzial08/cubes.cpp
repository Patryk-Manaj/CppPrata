// cubes.cpp -- parametry zwykłe i referencyjne
#include <iostream>
double cube(double a);
double refcube(double &ra);
int main ()
{
    using namespace std;
    double x = 3.0;

    cout << cube(x);
    cout << " = sześcian " << x << endl;
    cout << refcube(x);
    cout << " = sześcian " << x << endl;
    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double refcube(double &ra)
{
    ra *= ra * ra;
    return ra; 
}
