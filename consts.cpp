#include <iostream>

using namespace std;
class Example
{
private:
    string name;

public:
    void method() const { cout << "const method" << endl; } //? the const methods doesn't change the params values of the instance 
};

int main()
{
    int value = 10;
    int values[] = {1, 2, 3};
    int *pointer_to_values = values;
    int *pointer_to_value = &value;

    pointer_to_value = values; //? changes where the pointer is pointing ----> int *const pointer;
    *pointer_to_value = 10;    //* changes the pointer value  -----> const int* pointer;

    cout << *pointer_to_value << " " << pointer_to_value << " " << pointer_to_values << " " << *pointer_to_values << endl;

    return 0;
}