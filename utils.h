#include <iostream>
using namespace std;

bool password_getter()
{
    int password = 123;

    while (true)
    {
        int user_input;
        cout << "Insert the password" << endl;
        cin >> user_input;
        if (user_input == password)
        {
            return true;
        }
        cout << "Incorrect password" << endl;
    }
}