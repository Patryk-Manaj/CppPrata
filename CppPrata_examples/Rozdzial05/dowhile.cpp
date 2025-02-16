// dowhile.cpp -- pętla z kontrolą warunku na koniec
#include <iostream>
int main()
{
    using namespace std;
    int n;

    cout << "Aby poznać moją ulubioną liczbę, podawaj ";
    cout << "liczby od 1 do 10\n";
    do
    {
        cin >> n;       // wykonaj treść
    } while (n != 7);   // potem sprawdź warunek
    cout << "Tak, moja ulubiona liczba to 7.\n" ;
    return 0; 
}
