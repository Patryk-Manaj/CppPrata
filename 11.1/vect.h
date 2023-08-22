#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
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
            double mag;      // vector length
            double ang;      // vector direction (in degrees)
            Mode mode;       // RECT or POL
            // private member setters
            void set_mag();
            void set_ang();
            void set_x();
            void set_y();
        public:
            Vector();
            Vector(double n1, double n2, Mode form = RECT);
            void reset(double n1, double n2, Mode form = RECT);
            ~Vector();
            double xval() const {return x;}      // returns the value of the x component
            double yval() const {return y;}      // returns the value of the x component
            double magval() const {return mag;}  // returns the length
            double angval() const {return ang;}  // returns the angle
            void polar_mode();    // sets the mode to polar (POL)
            void rect_mode();     // sets the mode to Cartesian (RECT)
            // metody przeciążające operatory
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

