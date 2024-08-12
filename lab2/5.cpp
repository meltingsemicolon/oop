// WAP using structure.
#include <iostream>
#include <string.h>
using namespace std;
struct person
{
    string name;
    int age;
    float weight;
};
int main()
{
    person person1;
    cout << "enter name and age and weight: ";
    cin>> person1.name;
    cin >> person1.age>>person1.weight;
    cout << "person1 details:\n"
            "name: "
        << person1.name << " ";
    cout << "\nage: " << person1.age <<" ";
    cout <<"\nweight: " << person1.weight << endl;
    return 0; 
}