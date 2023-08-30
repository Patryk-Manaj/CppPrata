#include "stack1.h"

Stack::Stack(int n)
{
    if (n < 0 || n >= MAX)
        size = MAX; 
    else 
        size = n;
    pitems = new Item[size];
    top = 0; 
}

Stack::Stack(const Stack & st)
{
    size = st.size;
    pitems = new Item[size];
    top = st.top;
    for(int i = 0; i < size; i++)
    {
        pitems[i] = st.pitems[i];
    }
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top == 0; 
}

bool Stack::isfull() const 
{
    return top == MAX;
}

bool Stack::push(const Item & item)
{
    if (top < size)
    {
        pitems[top++] = item;
        return true;
    }
    else 
        return false; 

}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = pitems[--top];
        return true; 
    }
    else   
        return false; 
}

Stack & Stack::operator=(const Stack & st)
{
    if (this == &st)
        return *this; 
    delete [] pitems;
    top = st.top;
    size = st.size;
    pitems = new Item[size];
    for (int i = 0; i < size; i++)
    {
        pitems[i] = st.pitems[i];
    }
    return *this;
}


