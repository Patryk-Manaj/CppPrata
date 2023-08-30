#include <iostream>
#include "stack1.h"

int main()
{    
    using namespace std;
    Stack stack1(5);
    Stack stack2;

    stack1.push(10);
    stack1.push(20);
    stack1.push(30);

    Stack stack3 = stack1; // Using the copy constructor

    stack2 = stack1; // Using the assignment operator

    Item poppedItem;
    stack1.pop(poppedItem);
    cout << poppedItem << endl;
    stack2.push(50);
    Item poppedItem2, poppedItem3;  
    stack2.pop(poppedItem2);
    stack2.pop(poppedItem3); 
    cout << poppedItem2 << " " << poppedItem3 << endl;
    return 0;
}