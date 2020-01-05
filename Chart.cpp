#include <iostream>
#include "Charts.h"

using namespace std;

char Charts::reverse_array(char *start, char *end)
{
    int arr_size = 0;
    char *start_copy = start;
    cout << start << " " << end << endl;
    while (true)
    {
        cout << &arr_size << " " << &start_copy << endl;
        cout << start[arr_size] << endl;

        if (start_copy == end)
            break;

        start_copy++;
        arr_size++;
    }
    for (int i = 0; i < arr_size; i++)
    {
        char cache = *start;
        *start = *end;
        *end = cache;
        start++;
        end--;
    }
    cout << arr_size << endl;

    char new_char;
    return new_char;
};