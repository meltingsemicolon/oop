/*WAP using class and object which takes input as integer, float and character value
and display each value. You are advised to use proper member variable and member 
function with creation of object.*/

# include <iostream>
using namespace std;

class class1
{
    private:
    int integer;
    float floatnum;
    char character;
    public:
    void getdata()
    {
        cout<<"Enter a interger float and a character"<<endl;
        cin>>integer>>floatnum>>character;
    }
    void showdata()
    {
        cout<<"Integer value: "<<integer<<endl;
        cout<<"float value: "<<floatnum<<endl;
        cout<<"character value: "<<character<<endl;
    }
};

int main()
{
    class1 obj1,obj2;
    cout<<"Input Object1: \n";
        obj1.getdata();
    cout<<"Input Object2: \n";
        obj2.getdata();
    cout<<"Object 1:"<<endl;
        obj1.showdata();
    cout<<"Object2:"<< endl;
        obj2.showdata();
}
