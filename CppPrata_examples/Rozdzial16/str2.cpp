// str2.cpp -- metody capacity() oraz reserve()
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string empty;
    string small = "bit";
    string larger = "Słoń - najlepszy przyjaciel kobiet";
    cout << "Wielkość:\n";
    cout << "\tempty: " << empty.size() << endl;
    cout << "\tsmall: " << small.size() << endl;
    cout << "\tlarger: " << larger.size() << endl;
    cout << "Pojemność:\n";
    cout << "\tempty: " << empty.capacity() << endl;
    cout << "\tsmall: " << small.capacity() << endl;
    cout << "\tlarger: " << larger.capacity() << endl;
    empty.reserve(50);
    cout << "Pojemność po wywołaniu empty.reserve(50): "
        << empty.capacity() << endl;
    return 0;
}

