#include "cow.h"
#include <iostream>

int main()
{
    Cow cow("Holly", "Grass", 124.2);
    Cow cow1; 
    Cow cow2("Molly", "Running", 356.1); 
    Cow Cow3(cow2);
    cow.ShowCow();
    cow1 = cow; 
    cow1.ShowCow();
    Cow3.ShowCow();
    return 0;
}