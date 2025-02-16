// lexcast.cpp -- proste rzutowanie z float na string
#include <iostream>
#include <string>
#include "boost/lexical_cast.hpp"

int main()
{
    using namespace std;
    cout << "Podaj swoją wagę: ";
    float weight;
    cin >> weight;
    string gain = "10-procentowy przyrost ze ";
    string wt = boost::lexical_cast<string>(weight);
    gain = gain + wt + " daje "; // string operator+()
    weight = 1.1 * weight;
    gain = gain + boost::lexical_cast<string>(weight) + ".";
    cout << gain << endl;
    return 0;
}

