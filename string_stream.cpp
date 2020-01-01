#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    std::stringstream ss;

    ss << "Example";
    ss << "1";
    cout << ss.str() << endl;
    return 0;
}