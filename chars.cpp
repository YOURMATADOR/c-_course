#include <iostream>
#include <climits>

using namespace std;

int main()
{
    char some_char = 55;
    cout << some_char << endl;

    char some_character_in_ascii = '7';
    cout << some_character_in_ascii << endl;

    cout << (int)some_character_in_ascii << endl;

    wchar_t some_char_t = ';';
    cout << (char)some_char_t << endl;

    return 0;
}