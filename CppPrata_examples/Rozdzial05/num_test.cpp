// num_test.cpp -- liczbowy warunek pętli w pętli for
#include <iostream>
int main()
{
    using namespace std;
    cout << "Podaj wartość początkową odliczania: ";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--)     // koniec, kiedy i będzie równe 0
        cout << "i = " << i << "\n";
    cout << "Gotowe, bo już i = " << i << "\n";
    return 0;
}
