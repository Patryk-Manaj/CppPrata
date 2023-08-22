#include <cmath>
#include "vect.h"       
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    // convert radians do degs
    const double Rad_to_deg = 45.0 / atan(1.0);

    // calculate vector lenght from x and y 
    void Vector::set_mag()
    {
        mag = sqrt(x * x + y * y);
    }

    void Vector::set_ang()
    {
        if (x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y, x);
    }

    void Vector::set_x()
    {
        x = mag * cos(ang);
    }

    void Vector::set_y()
    {
        y = mag * sin(ang);
    }

    // public methods 
    Vector::Vector()          // default constructor
    {
        x = y = mag = ang = 0.0;
        mode = RECT;
    }

    // constructs a vector with given polar (in 'p' mode) 
    // or rectangular (default 'r' mode) coordinates
    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_x();
            set_y();
        }
        else
        {
            cout << "Invalid value for the third argument Vector() -- ";
            cout << "setting 0 to vectors coordinates\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }

    // zeroing the vector value for given Cartesian coordinates (for RECT)
    // or for given polar coordinates (POL)
    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_x();
            set_y();
        }
        else
        {
            cout << "Invalid value for the third argument set() -- ";
            cout << "zeroing vecktor\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }

    Vector::~Vector()   // descructor
    {
    }

    void Vector::polar_mode()  // switch to Polar mode
    {
        mode = POL;
    }

    void Vector::rect_mode()   // switches to Cartesian representation
    {
        mode = RECT;
    }

    // overloaded operators
    // adding two vectors
    Vector Vector::operator+(const Vector & b) const
    {
        return Vector(x + b.x, y + b.y);
    }

    // subtracting vector b from vector a
    Vector Vector::operator-(const Vector & b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    // changes the sign of the vector
    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }

    // multiplies the calling vector by n
    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }

    // friend functions
    // multiplies n by the vector a
    Vector operator*(double n, const Vector & a)
    {
        return a * n;
    }

    // displays vector coordinates (rectangular in RECT mode,
    // polar in POL mode)
    std::ostream & operator<<(std::ostream & os, const Vector & v)
    {
        if (v.mode == Vector::RECT)
            os << "(x,y) = (" << v.x << ", " << v.y << ")";
        else if (v.mode == Vector::POL)
        {
            os << "(m,a) = (" << v.mag << ", "
                << v.ang * Rad_to_deg << ")";
        }
        else
            os << "Niepoprawny tryb reprezentacji obiektu wektora";
        return os;
    }
} // end of VECTOR namespace

