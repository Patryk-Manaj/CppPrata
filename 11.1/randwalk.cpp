#include <iostream>
#include <fstream>
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
    ofstream fout; 
    fout.open("walk.txt");
    cout << "Enter the walk distance (k, to terminate program): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        fout << "Distance to pass " << target << ", step size: " << dstep << endl;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
            fout << steps << ": " << result << endl;  
        }
        fout << "After " << steps << " steps gentleman "
            "reached the position:\n";
        fout << result << endl;
        result.polar_mode();
        fout << " meaning\n" << result << endl;
        fout << "The average apparent step length = "
            << result.magval()/steps << endl;

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter the walk distance (k, to terminate program): ";
    }
    cout << "End!\n";
    fout.close();
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}

