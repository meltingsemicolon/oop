// wap to illustrate example of static data member.
#include <iostream>
#include <string>
using namespace std;
class userName
{
    static string y;
    public:
    void getName()
    {
        getline(cin, y);
    }
    void putName()
    {
        cout<<"\nName entered is: "<<y;
    }
};
string userName::y; // Defination of static variable.
int main()
{
    userName person;
    cout<<"Enter person name: ";
    person.getName();
    person.putName();
}