// wap for constructor in base class.
#include <iostream>
using namespace std;
class base 
{
    protected:
    int var;
    public:
    // Constructor in base class.
    base()
    {
        var=10;
    }
    void show()
    {
        cout<<"Value: "<<var<<endl;
    }
};
class derived:public base {
    public:
    derived():base(){}
};
int main()
{
    derived obj1;
    obj1.show();
}

