#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat()
{
    happy = false;
}

Cat::~Cat()
{
    cout << "Cat must die..." << endl;
}

void Cat::speak()
{
    cout << "Meow little master" << endl;
}

void Cat::saidGoodBye()
{
    cout << "Good bye little master" << endl;
}

void Cat::getHummor()
{
    if (happy)
    {
        cout << "Cat is happy" << endl;
    }
    else
    {
        cout << "Cat is drepressed" << endl;
    }
}

void Cat::setHummor(bool humor = false)
{
    cout << "Changing the hummor" << endl;
    happy = humor;
}