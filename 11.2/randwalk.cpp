#include <iostream>
#include <cstdlib>    
#include <ctime>      
#include "vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));   
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter the walk distance (k, to terminate program): ";
    while (cin >> target)
    {
        cout << "Enter step size: ";
        if (!(cin >> dstep))
            break;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "After " << steps << " steps gentleman "
            "reached the position:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " what is\n" << result << endl;
        cout << "The average apparent step length = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter the walk distance (k, to terminate program): ";
    }
    cout << "End!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}

