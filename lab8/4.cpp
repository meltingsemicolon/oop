// multiple inheritance
#include <iostream>
using namespace std;
class Base1
{
    protected:
    int x=34;
};
class Base2
{
    protected:
    int y=12;
};
class Derived : public Base1, public Base2
{   public:
    Derived():Base1(),Base2()
    {
      cout<<"(x,y)="<<"("<<x<<","<<y<<")";
    }
};
int main()
{
    Derived obj;
}