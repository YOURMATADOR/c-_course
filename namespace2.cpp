#include <iostream>
#include "namespace2.h"
using namespace std;
namespace avila
{
void Animal::said_hello()
{
    cout << "Hello my name is " << this->name << endl;
}

} // namespace avila