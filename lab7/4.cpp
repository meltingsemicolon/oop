// WAP for Overloading relational operator(>)
#include <iostream>
using namespace std;

class Myclass
{
private:
    int value;

public:
    Myclass(int val) : value(val) {}

    bool operator<(const Myclass &other) const
    {
        return value < other.value;
    }
    bool operator>(const Myclass &other) const
    {
        return value > other.value;
    }
    bool operator==(const Myclass &other) const
    {
        return value == other.value;
    }
};
int main()
{
    int val1, val2;

    cout << "Enter the value for obj1: ";
    cin >> val1;

    cout << "Enter the value for obj2: ";
    cin >> val2;

    Myclass obj1(val1);
    Myclass obj2(val2);
    if (obj1 < obj2)
    {
        cout << "obj1 is less than obj2" << endl;
    }
    else if (obj1 > obj2)
    {
        cout << "obj1 is greater than obj2" << endl;
    }
    else
    {
        cout << "obj1 is not less than or greater than obj2" << endl;
    }
    if (obj1 == obj2)
    {
        cout << "obj1 and obj2 are equal" << endl;
    }
    else
    {
        cout << "obj1 and obj2 are not equal" << endl;
    }
}
