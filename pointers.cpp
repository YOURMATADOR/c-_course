#include <iostream>

using namespace std;

void changing_the_original(double *pValue)
{
    cout << pValue << endl;
    cout << *pValue << endl;
    *pValue = 10;
    cout << pValue << endl;
    cout << *pValue << endl;
}

int main()
{
    double nValue = 20;
    double *pnValue = &nValue;
    cout << nValue << endl;
    cout << &nValue << endl;

    changing_the_original(&nValue);
    cout << nValue << endl;
    cout << &nValue << endl;

    return 0;
}