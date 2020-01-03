#ifndef CAT_H
#define CAT_H

class Cat
{
private:
    bool happy;

public:
    Cat() : happy(false){}; //? you can initialize the variables with a different sintaxt meaning the out part the this varible and the incide o the paramether meaining the new value for the this part
    Cat(bool humor);        //* constructor
    ~Cat();                 //! destructor
    void speak();
    void saidGoodBye();
    void getHummor();
    void setHummor(bool humor);
};

#endif // CAT_H
