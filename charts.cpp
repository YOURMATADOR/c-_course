#include <iostream>
#include "Charts.h"
#include "Chart.cpp"

using namespace std;

int main()
{
    char awesome_word_in_char[] = "test";

    for (int i = 0; i < sizeof(awesome_word_in_char); i++)
    {
        cout << (char)awesome_word_in_char[i] << endl;
    }

    int k = 0;

    while (true)
    {
        cout << awesome_word_in_char[k] << endl;

        if (k == sizeof(awesome_word_in_char))
            break;

        k++;
    }

    char original_arr[] = "eduardo";
    int original_size = sizeof(original_arr) - 1;
    char *arr_start = original_arr;
    char *arr_end = arr_start + original_size - 1;
    Charts utils_chart;
    cout << arr_start << " " << &arr_start << endl;
    utils_chart.reverse_array(arr_start, arr_end);
    cout << original_arr << endl;
    return 0;
}