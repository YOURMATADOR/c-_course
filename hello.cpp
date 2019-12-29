#include <iostream>
using namespace std;

int function_example()
{
    return 1;
}
class Animals
{
private:
    int cats = 5;
    int dogs = 10;

public:
    int getDogs()
    {
        return dogs;
    }
    int getCats()
    {
        return cats;
    }
    int getTotalAnimals()
    {
        return dogs + cats;
    }
};

int main()
{
    // multiple text in the same line but programmed in multiple lines
    Animals cats;
    cout << cats.getCats() << endl;
    
    cout << "Some text and more here ...." << flush;
    cout << "example " << function_example() << endl;
    return 0;
}