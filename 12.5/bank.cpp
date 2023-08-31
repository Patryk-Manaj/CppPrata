// bank.cpp -- test interfejsu klasy Queue
// kompilować z plikiem queue.cpp
#include <iostream>
#include <cstdlib>             // funkcje rand() i srand()
#include <ctime>               // funkcja time()
#include "queue.h"
const int MIN_PER_HR = 60;
bool newcustomer(double x);    // czy dotarł już następny klient?

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
    std::srand(std::time(0));  // initialization of the random number generator

    cout << "Studium przypadku: bankomat Banku Stu Kas\n";
    cout << "Podaj maksymalną długość kolejki: ";
    int qs;
    cin >> qs;
    Queue line(qs);            // in the queue can stand up to qs customers
    double AvgNumPerHour;
    cout << "Enter avreage number of clinets per hour: " << endl;
    cin >> AvgNumPerHour;

    bool val_found = false; 
    double min_per_cust;       // average time interval between clients
    const int NUM_SIMULATIONS = 100;
    long cyclelimit = MIN_PER_HR * NUM_SIMULATIONS;
    const double TARGET_WAITING_TIME = 1.0; // Target average waiting time in minutes

    for (double perhour = 0.1; perhour <= AvgNumPerHour; perhour += 0.01)
    {
        Item temp;                 // new customer details
        long turnaways = 0;        // number of clients sent back from the queue
        long customers = 0;        // number of customers admitted to the queue
        long served = 0;           // number of customers served in the simulation
        long sum_line = 0;         // total number of waiting
        int wait_time = 0;         // time until the ATM is released
        long line_wait = 0;        // total waiting time
        double total_waiting_time = 0.0;

        min_per_cust = MIN_PER_HR / perhour;
        Queue line(qs);  // Create a new queue for each simulation
        for (int cycle = 0; cycle < cyclelimit; cycle++)
        {
            
            if (newcustomer(min_per_cust))  
            {
                if (line.isfull())
                    turnaways++;
                else
                {
                    customers++;
                    temp.set(cycle);        // arrival time = cycle no
                    line.enqueue(temp);     // joining the client to the queue
                }
            }
            if (wait_time <= 0 && !line.isempty())
            {
                line.dequeue (temp);        // next to be served
                wait_time = temp.ptime();   // service time = wait_time
                line_wait += cycle - temp.when();
                served++;
            }
            if (wait_time > 0)
                wait_time--;
            sum_line += line.queuecount();
        }
        line.~Queue();

            
        double average_waiting_time = total_waiting_time / NUM_SIMULATIONS;

        // Check if the average_waiting_time is approximately equal to the target
        if (std::abs(((double) line_wait / served) - TARGET_WAITING_TIME) < 0.01)
        {
            std::cout << "Found perhour value: " << perhour << std::endl;
            // the results
            if (customers > 0)
            {
                cout << "   number of enrolled clients: " << customers << endl;
                cout << "   number of customers served: " << served << endl;
                cout << "number of customers sent back: " << turnaways << endl;
                cout << "         average queue length: ";
                cout.precision(2);
                cout.setf(ios_base::fixed, ios_base::floatfield);
                cout.setf(ios_base::showpoint);
                    cout << (double) sum_line / cyclelimit << endl;
                cout << "         average waiting time: "
                    << (double) line_wait / served << " minutes\n";
            }
            else
                cout << "No customers!\n";
                
            val_found = true; 
            break;
        }
    }

    if (!val_found)
    {
        cout << "Error! \nAverage waiting time in que == 1 min for average num of clients per hour: \nnot found!"; 
    }

    cout << "Gotowe!\n";

    return 0;
}

bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}

