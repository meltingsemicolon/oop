// constructor in multiple inheritance
#include<iostream>
using namespace std;
class Base1{
    protected:
    int x;
    public:
    Base1(int val)
    {
        x=val;
    }
};
class Base2{
     protected:
    int y;
    public:
    Base2(int val)
    {
        y=val;
    }
};
class Derived:public Base1,public Base2{
    public:
    Derived(int a,int b,int c):Base1(a),Base2(b)
    {
        int z=c;
    cout<<"(x,y,z)="<<"("<<x<<","<<y<<","<<z<<")";
    }
};
int main()
{
    Derived egg(12,23,45);
}
