#include <iostream>

using namespace std;
string *getString()
{
    string *new_string = new string[10];
    cout << new_string << endl;
    cout << *new_string << endl;
    cout << &new_string << endl;
    return new_string;
}

void freeMemory(string *string_to_delete)
{
    delete[] string_to_delete;
}

int main()
{
    string *strings_from_function = getString();
    freeMemory(strings_from_function);
    for (int i = 0; i < 10; i++)
    {
        *strings_from_function = "11";
        cout << *strings_from_function << endl;
        strings_from_function++;
    }
    return 0;
}