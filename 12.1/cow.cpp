#include "cow.h"
#include <cstring>

Cow::Cow()
{
    name[0] = '\0';
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0.0; 
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    strcpy(name, nm);
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt; 
}

Cow::Cow(const Cow & c)
{
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) +1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    std::cout << name << " - Object deleted!\n";
    delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
    if (this == &c)
        return *this; 
    delete [] hobby;
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby)+1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const
{
    std::cout << "This is "<< name << ". " << name << " is interested in " << hobby << ". She weighs " << weight << " pounds." << std::endl;
}