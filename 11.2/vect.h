#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
#include <cmath>
using std::sqrt;
namespace VECTOR
{
    class Vector
    {
        public:
            enum Mode {RECT, POL};
            // RECT are Cartesian coordinates, POL are polar coordinates
        private:
            double x;        // horizontal component value
            double y;        // vertical component value
            Mode mode;       // RECT or POL
            //  // private member setters
            double calc_x(double n1, double n2);
            double calc_y(double n1, double n2);
        public:
            Vector();
            Vector(double n1, double n2, Mode form = RECT);
            void reset(double n1, double n2, Mode form = RECT);
            ~Vector();
            double xval() const {return x;}      // returns the value of the x
            double yval() const {return y;}      // returns the value of the y
            double magval() const {return sqrt(x * x + y * y);}  // returns the length
            double angval() const {if (x == 0.0 && y == 0.0) return 0.0; else return atan2(y, x) / (45.0 / atan(1.0));}  // returns the angle
            void polar_mode();    // sets the mode to polar (POL)
            void rect_mode();     // sets the mode to Cartesian (RECT)
            // operator overloading methods
            Vector operator+(const Vector & b) const;
            Vector operator-(const Vector & b) const;
            Vector operator-() const;
            Vector operator*(double n) const;
            // friend functions 
            friend Vector operator*(double n, const Vector & a);
            friend std::ostream &
                operator<<(std::ostream & os, const Vector & v);
    };
} // end of VECTOR namespace
#endif

