// wap for illustration of virtual destructor
#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base constructor called" << endl;
    }
    virtual ~Base()
    {
        cout << "Base destructor called" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived constructor called" << endl;
    }
    ~Derived() override
    {
        cout << "Derived destructor called" << endl;
    }
};

int main()
{
    Base *basePtr = new Derived();

    delete basePtr;

    return 0;
}
