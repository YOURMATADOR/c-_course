#include <iostream>
#include "namespace1.h"
#include "namespace2.h"
#include "namespace1.cpp"
#include "namespace2.cpp"

using namespace std;
using namespace avila;
using namespace eduardo;
int main()
{
    eduardo::Animal new_animal_eduardo;
    avila::Animal new_animal_eduardo2;
    new_animal_eduardo.said_hello();
    new_animal_eduardo2.said_hello();
    return 0;
}
