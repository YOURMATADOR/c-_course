#include <iostream>

using namespace std;

class Animal
{
private:
    string name;

public:
    Animal(string name) { this->name = name; }
    void saidHello() { cout << "Hello im: " << this->name << endl; }
};

class Dog : public Animal //? inheritance
{
public:
    void bark() { cout << "Guaw" << endl; }
};

class Shark : public Animal
{
public:
    Shark(string name) : Animal(name){}; // ? its calling the super class constructor
    void EatDog() { cout << "Eat dog!" << endl; }
};
int main()
{
    Shark poky("Poky");
    poky.saidHello();
    poky.EatDog();

    return 0;
}
