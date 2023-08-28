#include "complex0.h"

static const signed int uiChangeToNegativeNum = -1;

complex::complex()
{
    dReal = dImmaginary = 0.0;
}

complex::complex(double dR, double dI)
{
    dReal = dR;
    dImmaginary = dI;
}

complex::~complex()
{

}

istream& operator>>(istream& is, complex &c)
{
    cout << "Enter real number: "; 
    while (cin >> c.dReal)
    {
    cout << "Enter immaginary number: "; 
        if(!(cin >> c.dImmaginary))
            break;
        break;
    }
    return is;
}
ostream& operator<<(ostream& os, const complex &c)
{
    os << "(" << fixed << std::setprecision(1) << (double) c.dReal << ", " << (double) c.dImmaginary << "i)" << endl;
    return os;
}

complex operator~(complex & c)
{
    complex cxTemp; 
    cxTemp.dReal = c.dReal;
    cxTemp.dImmaginary = (uiChangeToNegativeNum) * c.dImmaginary;
    return cxTemp;
}

complex complex::operator+(const complex & c)
{
    complex cxSum; 
    cxSum.dReal = dReal + c.dReal; 
    cxSum.dImmaginary = dImmaginary + c.dImmaginary;
    return cxSum;
}
complex complex::operator-(const complex & c)
{
    complex cxDiv; 
    cxDiv.dReal = dReal - c.dReal; 
    cxDiv.dImmaginary = dImmaginary - c.dImmaginary;
    return cxDiv;
}

complex complex::operator*(const complex & c)
{
    complex cxMult; 
    cxMult.dReal = (c.dReal * dReal - c.dImmaginary * dImmaginary);
    cxMult.dImmaginary = (c.dReal * dImmaginary + c.dImmaginary * dReal);
    return cxMult;
}

complex operator*(double x, const complex & c)
{
    complex cxMult; 
    cxMult.dReal = x * c.dReal;
    cxMult.dImmaginary = x * c.dImmaginary;
    return cxMult;
}
