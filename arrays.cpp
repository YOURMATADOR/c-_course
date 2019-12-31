#include <iostream>
#include <string>

using namespace std;

int main()
{
    int values[5] = {1,
                     2,
                     3,
                     4,
                     5};

    int multi_array[2][3] = {{1, 2, 4}, {3, 4, 5}};

    cout << values << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << values[i] << endl;
    }
    string words[] = {"eduardo", "Avila"};

    for (int i = 0; i < 2; i++)
    {
        cout << words[i] << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout << multi_array[i][x] << endl;
        }
    }

    cout << sizeof multi_array << endl;

    //? how to get the length of an array

    for (int i = 0; i < sizeof(multi_array) / sizeof(multi_array[0]); i++)
    {
        for (int x = 0; x < sizeof(multi_array[1]) / sizeof(int); x++)
        {
            cout << x << " ;" << multi_array[i][x] << endl;
        }
    }
    return 0;
}