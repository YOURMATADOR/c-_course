#include <iostream>

using namespace std;

void change_original_value(int &original) // * this is a reference is telling that change the value from the original memory location
{
    original = 666;
}

void change_original_pointer(int *original)
{
    *original = 999;
}

void not_change_original_pointer(int original)
{
    original = 999;
}

int main()
{
    int old_original = 10;
    cout << "Before the change" << endl;
    cout << old_original << endl;

    change_original_value(old_original);
    cout << "After the change" << endl;
    cout << old_original << endl;

    change_original_pointer(&old_original);
    cout << "Another the change" << endl;
    cout << old_original << endl;

    not_change_original_pointer(old_original);
    cout << "NOT A change" << endl;
    cout << old_original << endl;
    return 0;
}