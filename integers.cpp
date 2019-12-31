#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int value = -54654;

    cout << value << endl;
    cout << "min value " << INT_MIN << endl;
    cout << "max value " << INT_MAX << endl;

    long some_long = 33333;
    cout << "some_long " << some_long << endl;

    short some_short = 323;
    cout << "some_short " << some_short << endl;

    unsigned some_unsigned = 32233;
    cout << "some_unsigned " << some_unsigned << endl;

    cout << "unsigned size " << sizeof(unsigned) << endl;

    return 0;
}
