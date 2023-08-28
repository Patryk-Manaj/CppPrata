#ifndef _COMPLEX_0_
#define _COMPLEX_0_
#include <iostream>
#include <iomanip>
using std::istream;
using std::ostream;
using namespace std; 
class complex
{ 
    private:
        double dReal; 
        double dImmaginary;
    public:
        complex();
        complex(double dR, double dI);
        ~complex();
        friend istream & operator>>(istream& is, complex & c); 
        friend ostream & operator<<(ostream& os, const complex & c); 
        friend complex  operator~(complex & c);
        complex operator+(const complex & c);
        complex operator-(const complex & c);
        complex operator*(const complex & c);
        friend complex operator*(double x, const complex & c);
};
#endif