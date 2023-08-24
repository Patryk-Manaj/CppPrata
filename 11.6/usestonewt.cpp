#include <iostream>
#include "stonewt.h"

int main()
{
    using namespace std; 
    static const int STONE_MAX = 6;
    static const int NUM_OF_STONES_READED = 3;
    int iStones = 0;
    double dPounds = 0.0; 
    int iCounter = 0; 
    Stonewt comp_stone(11, 0);
    Stonewt max_elem; 
    Stonewt min_elem;
    Stonewt stone_table[STONE_MAX];
    int iMinIdx = 0;
    int iMaxIdx = 0; 
    stone_table[0] = Stonewt(10, 5.9); 
    stone_table[1] = Stonewt(1, 13.9);
    stone_table[2] = Stonewt(21, 3);
    min_elem = stone_table[0];
    for (int i = 0; i < NUM_OF_STONES_READED; i++)
    {
        cout << i + 4 <<". Enter number of stones: "; 
        cin >> iStones;
        cout << i + 4 << ". Enter number of pounds: "; 
        cin >> dPounds;
        stone_table[NUM_OF_STONES_READED + i] = Stonewt(iStones, dPounds);
        iStones = 0;
        dPounds = 0.0; 
    }

    for (int i = 0; i < STONE_MAX; i++)
    {
        if (stone_table[i] >= comp_stone)
            iCounter++;

        if (stone_table[i] > max_elem)
        {
            max_elem = stone_table[i];
            iMaxIdx = i;
        }
        
        if (stone_table[i] < min_elem)
        {
            min_elem = stone_table[i];
            iMinIdx = i;
        }
    }
    cout << "Number of elemts which has greater or equal number of stones than 11: " << iCounter << endl; 
    cout << "Index of the smallest element is: " << iMinIdx + 1 << " and the greatest: " << iMaxIdx + 1 << endl; 

    return 0; 
}