// WAP using function overloading.
#include <iostream>
using namespace std;
   // Function to calculate the area of a circle
float calculateArea(float radius) {
    return 3.14 * radius * radius;
}
// Function to calculate the area of a rectangle
float calculateArea(float length, float width) {
    return length * width;
}
int main() {
    float radius, length, width;
    // Calculate the area of a circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << calculateArea(radius) << endl;
    // Calculate the area of a rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << calculateArea(length, width) << endl;
    return 0;
} 