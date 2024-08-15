// wap for virtual function example using inheritance.
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float getArea() = 0; // pure virtual function

    void printArea()
    {
        cout<< "Area: " << getArea()<<endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    float getArea() override
    {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float getArea() override
    {
        return length * width;
    }
};

int main()
{
    Shape *shapePtr;
    Circle circle(2.4);
    Rectangle rectangle(10, 6);
    shapePtr = &circle;
    cout<<"Circle's ";
    shapePtr->printArea();
    cout<<"rectangle's ";
    shapePtr = &rectangle;
    shapePtr->printArea();
}

