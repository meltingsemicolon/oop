// illustration of class template
#include <iostream>
using namespace std;
template <class T>
class MyClass {
private:
    T data;

public:
    MyClass(const T& value) : data(value) {}

    void printData() const {
        cout << "Data: " << data << endl;
    }
};
int main() {
    MyClass<int> obj1(10);
    obj1.printData();
    MyClass<string> obj2("Hello");
    obj2.printData();

    return 0;
}
