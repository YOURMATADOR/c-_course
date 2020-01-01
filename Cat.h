#ifndef CAT_H
#define CAT_H

class Cat
{
private:
    bool happy;

public:
    Cat();  //* constructor
    ~Cat(); //! destructor
    void speak();
    void saidGoodBye();
    void getHummor();
    void setHummor(bool humor);
};

#endif // CAT_H
