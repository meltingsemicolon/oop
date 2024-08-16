// wap for illustration of virtual base class
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void sound() = 0;
};
// Derived classes
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};
class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows" << endl;
    }
};
class Lion : public Animal {
public:
    void sound() {
        cout << "Lion roars" << endl;
    }
};
// Virtual base class
class Hybrid : public Dog, public Cat, public Lion {
public:
   
    void sound() {
        Dog::sound();
        Cat::sound();
        Lion::sound();
    }
};

int main() {
    // Create an object of Hybrid class
    Hybrid hybridObj;

    // Call the sound() function
    hybridObj.sound();

    return 0;
}
