#include <iostream>
#include "namespace1.h"
using namespace std;

namespace eduardo
{
void Animal::said_hello()
{
    cout << "Hello my name is " << this->name << endl;
}

} // namespace eduardo