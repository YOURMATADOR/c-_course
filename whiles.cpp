#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    while (true)
    { //? infiniteloop
        cout << i << endl;
        i++;
        if (i > 100)
        {
            return 0;
        }
    }
    return 0;
}