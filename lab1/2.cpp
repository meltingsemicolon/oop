// WAP to calculate area and circumference of a circle.
#include <iostream>
using namespace std;
#define pie 3.14
int main()
{
    float radius, area, circumference;
    cout << "What is the radius of the circle?";
    cin >> radius;
    circumference = 2 * pie * radius;
    area = pie * radius * radius;
    cout<<"Area of circle is: "<<area<<endl;
    cout<<"Circumference of circle is: "<<circumference<<endl;
    return 0;
}