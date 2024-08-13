// wap to illlustrate the example of static member function.
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
        cout << "\nName entered is: " << y;
    }
    static void printMessage()
    {
        cout << "\nThis is a static member function." << endl;
    }
};
string userName::y; // Definition of static variable.
int main()
{
    userName person;
    cout << "Enter person name: ";
    person.getName();
    person.putName();
    userName::printMessage(); // Calling the static member function.
    return 0;
}
