#include <iostream>
#include <climits>

using namespace std;

bool compare_floats(float A, float B, float epislon = 0.0005f)
{
    return (A - B) < epislon;
}

int main()
{
    float some_float = 2.2;
    if (compare_floats(some_float, 2.2))
    {
        cout << "The values are equals" << endl;
    }
    else
    {
        cout << "The values are NOT equals" << endl;
    }
    return 0;
}