// vect1.cpp -- przedstawienie podstawowych funkcji szablonu vector
#include <iostream>
#include <string>
#include <vector>

const int NUM = 5;
int main()
{
    using std::vector;
    using std::string;
    using std::cin;
    using std::cout;
    using std::endl;

    vector<int> ratings(NUM);
    vector<string> titles(NUM);
    cout << "Postępuj dokładnie według instrukcji. Wpisz\n"
        << NUM << " tytułów książek oraz ich oceny na skali 0-10.\n";
    int i;
    for (i = 0; i < NUM; i++)
    {
        cout << "Wpisz tytuł numer " << i + 1 << ": ";
        getline(cin, titles[i]);
        cout << "Wpisz ocenę na skali 0-10: ";
        cin >> ratings[i];
        cin.get();
    }
    cout << "Dziękuję. Wpisałeś następujące dane:\n"
        << "Ocena\tKsiążka\n";
    for (i = 0; i < NUM; i++)
    {
        cout << ratings[i] << "\t" << titles[i] << endl;
    }

    return 0;
}

