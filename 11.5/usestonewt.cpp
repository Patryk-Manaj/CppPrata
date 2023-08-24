#include <iostream>
#include "stonewt.h"

int main()
{
    using namespace std; 
    using STONEWT::Stonewt;
    Stonewt stone1(17.4); 
    Stonewt stone2(107.9); 
    // Stonewt stone_result(); 
    stone1.vStoneInIntMode();
    cout << stone1;
    stone1.vPoundsInIntMode();
    cout << stone1;
    stone1.vPoundsInDoubleMode();
    cout << stone1;

    // cout << "Adding!\n";
    // stone1 = stone1 + stone2;
    // stone1.vStonesInIntAndPoundsInDoubleMode();
    // cout << stone1;
    // stone1.vStonesAndPoundsInDoubleMode();
    // cout << stone1;
    // stone1.vStoneInIntMode();
    // cout << stone1;
    // stone1.vPoundsInIntMode();
    // cout << stone1;
    // stone1.vPoundsInDoubleMode();
    // cout << stone1;

    cout << "Subtracting objects!\n";
    stone1 = stone2 - stone1;
    stone1.vStonesInIntAndPoundsInDoubleMode();
    cout << stone1;
    stone1.vStonesAndPoundsInDoubleMode();
    cout << stone1;
    stone1.vStoneInIntMode();
    cout << stone1;
    stone1.vPoundsInIntMode();
    cout << stone1;
    stone1.vPoundsInDoubleMode();
    cout << stone1;

    return 0;
}

