#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    double seconds = 129898;
    int minutes = (int)seconds / 60;
    int hours = (((int)minutes / 60));
    int days = (int)hours / 24;
    cout << minutes << endl;
    cout << hours << endl;
    cout << days << endl;

    string arr_pointer[] = {"one", "two", "three"};

    string *p_arr_pointer = arr_pointer;
    string &p_arr_pointer_final = arr_pointer[2];

    cout << p_arr_pointer << endl;
    cout << &p_arr_pointer << endl;
    cout << *p_arr_pointer << endl;

    while (true)
    {
        cout << p_arr_pointer << " " << p_arr_pointer_final << " " << &p_arr_pointer_final << " " << &p_arr_pointer << *p_arr_pointer << endl;
        if (p_arr_pointer == &p_arr_pointer_final)
        {
            break;
        }
        p_arr_pointer++;
    }

    return 0;
}