// wap for base and derived class constructor.
#include <iostream>
using namespace std;
class base 
{
    protected:
    int var;
    public:
    // Constructor in base class.
    base(int value)
    {
        var=value;
    }
};
class derived:public base {
    public:
    int vaL;
    derived(int value,int val):base(value){
        vaL=val;
    }
      void show()
    {
        cout<<"Value: "<<var<<endl;
        cout<<"Value: "<<vaL<<endl;
    }
};
int main()
{
    derived obj1(12,3);
    obj1.show();
}