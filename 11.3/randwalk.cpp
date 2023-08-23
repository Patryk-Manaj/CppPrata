// randwalk.cpp -- test klasy Vector
// kompilować z plikiem vect.cpp
#include <iostream>
#include <cstdlib>    // prototypy funkcji rand() i srand()
#include <ctime>      // prototyp funkcji time()
#include "vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));   // inicjalizacja generatora liczb pseudolosowych
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    unsigned long avg_steps; 
    unsigned long max_step; 
    unsigned long min_step;
    unsigned long all_steps = 0;  
    double target;
    double dstep;
    int N; // Number of interations
 
    cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
    while (cin >> target)
    {
        cout << "Podaj długość kroku: ";
        if (!(cin >> dstep))
            break;

        cout << "Enter number of iterations: ";
        cin >> N;    
        for (int i = 0; i < N; i++)
        {
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
            }

            if (i == 0)
                max_step = min_step = steps; 

            if (steps > max_step)
                max_step = steps; 
            
            if (steps < min_step)
                min_step = steps;

            result.reset(0.0, 0.0);
            all_steps += steps; 
            // avg_steps = all_steps/N;
            steps = 0; 
        }
        avg_steps = all_steps/N;
        cout << "Average number of steps: " << avg_steps << ".\nMaximum number of steps: " << max_step << ".\nMinimum number of steps: " << min_step << endl; 
        cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
    }
    cout << "Koniec!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}

