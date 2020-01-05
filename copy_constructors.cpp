#include <iostream>

using namespace std;

class Animal
{
private:
    string name;

public:
    Animal(){};
    Animal(string name) { this->name = name; };
    Animal(const Animal &cpy) { this->name = cpy.name; }; //* Constructor when you copy one stance of an object through another object or instance
    ~Animal() { cout << "animal destroyed" << endl; };
    void set_name(string name) { this->name = name; };
    void print_name() { cout << this->name << endl; };
};

Animal *pNewAnimal()
{
    Animal *new_animal = new Animal("New name");
    return new_animal;
}

int main()
{
    Animal poki("poky");
    Animal poki2 = poki;
    poki.print_name();
    poki2.print_name();
    poki2.set_name("Tupac");
    poki2.print_name();
    Animal *pAnimal = new Animal("new pointer animal");

    pAnimal->print_name();
    delete pAnimal;

    Animal *reference_animal = pNewAnimal();
    reference_animal->print_name();
    delete reference_animal;

    char letter = 'a';

    Animal *pArrAnimals = new Animal[26];
    for (int i = 1; i < 26; i++)
    {
        pArrAnimals->set_name(string(i, letter));
        pArrAnimals->print_name();
        pArrAnimals++;
        letter++;
    }
    delete[] pArrAnimals;
    cout << sizeof(pArrAnimals) << endl;
    return 0;
}