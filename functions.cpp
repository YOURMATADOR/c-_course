#include <iostream>
#include "utils.h"

using namespace std;

int main()
{
    bool password_correct = password_getter();
    if (password_correct)
    {
        cout << "Access granted" << endl;
    }
    return 0;
}