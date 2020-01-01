#include <iostream>
#include "Cat.cpp"
#include "Cat.h"

int main()
{
    Cat cat;
    cat.saidGoodBye();
    cat.getHummor();
    cat.setHummor(true);
    cat.getHummor();
    return 0;
}