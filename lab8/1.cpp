// Wap for single inheritance (one base and one derived)
#include <iostream>
#include <cmath>
using namespace std;

class base 
{
    protected:
    double var;
    public:
    void getdata()
    {
        cin>>var;
    }
   void operator ++()   
    {
        var=var*var;
    }
       void show()
 {
     cout<<var<<endl;
 }
};
class derived:public base
{
    public:
    void operator --()
    {
        var = sqrt(var);
    }
 
};
 int main()
 {
    derived d1;
    d1.getdata();
    ++d1;
    cout<<"Square of given number is: ";
    d1.show();
    --d1;
    cout<<"Root after operation: ";
    d1.show();
 }
