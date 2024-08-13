// wap to illustrate example of copy constructor
#include <iostream>
using namespace std;

class NuM
{
    private :
    int x,y;
    public:
    NuM()
    {
        x=1;
        y=1;
    }
    void getData()
    {
       cin>>x>>y;
    }
    NuM addval(NuM n2)
    {
        NuM sum;
        sum.x=x+n2.x;
        sum.y=y+n2.y;
        return sum;
    }
    void putData()
    {
        cout<<"x="<<x<<" ,y="<<y<<endl;

    }

};
int main()
{
    NuM n1,n2,n3;
    n2.getData();
    n3=n1.addval(n2);
    cout<<"sum is"<<endl;
    n3.putData();
     NuM n4(n3);// copy constructor
    cout<<"Copy constructor: ";
    n4.putData();
}