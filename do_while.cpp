#include <iostream>

using namespace std;

int main()
{
    const string pass = "123";
    string password = "";
    do
    {
        cout << "enter your password" << endl;
        // statement block
        cin >> password;
        if (password != pass)
        {
            cout << "Invalid password!" << endl;
        }
    } while (password != pass);
    cout << "Password accepted!" << endl;
    return 0;
}