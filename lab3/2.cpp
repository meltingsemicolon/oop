/*2. Create a class called "Rectangle" to represent a rectangle. The class should have private data members for the length 
and width of the rectangle. It should also have public member functions to set the length and width, calculate the area 
and perimeter, and display the details of the rectangle.
Write a C++ program to implement the "Rectangle" class and demonstrate its functionality by creating two rectangle objects.
 Prompt the user to enter the dimensions of each rectangle, calculate and display their areas and perimeters.
Your program should provide the following functionalities:
a. Create a class "Rectangle" with appropriate data members and member functions.
b. Implement member functions to set the length and width of the rectangle.
c. Implement member functions to calculate the area and perimeter of the rectangle.
d. Implement a member function to display the details of the rectangle (length, width, area, and perimeter).
e. In the main function, create two rectangle objects, prompt the user to enter dimensions for each rectangle, and display
 their details.
Note: Assume that the dimensions of the rectangles entered by the user are valid positive numbers.
Sample Output:
Enter the dimensions of Rectangle 1:
Length: 5
Width: 3
Enter the dimensions of Rectangle 2:
Length: 7
Width: 4
Details of Rectangle 1:
	Length: 5
	Width: 3
	Area: 15
	Perimeter: 16
Details of Rectangle 2:
	Length: 7
	Width: 4
	Area: 28
	Perimeter: 22*/
#include<iostream>
using namespace std;
class rectangle
{
	private:
		float length;
		float width;
	public:
		void setLength(float l)
		{
			length= l;
		}
		void setWidth(float w)
		{
			width= w;
		}
		float getArea()
		{
			return length * width;
		}
		float getPerimeter()
		{
			return 2 * (length + width);
		}
		void display()
		{
			cout<<"Length: "<<length<<endl;
			cout<<"Width: "<<width<<endl;
			cout<<"Area: "<<getArea()<<endl;
			cout<<"Perimeter: "<<getPerimeter()<<endl;
		}
};
int main()
{
	rectangle r1, r2;
	float length, width;
	cout<<"Enter the dimensions of Rectangle 1: "<<endl;
	cout<<"Length: ";
	cin>>length;
	cout<<"Width: ";
	cin>>width;
	r1.setLength(length);
	r1.setWidth(width);
	cout<<endl<<"Enter the dimensions of Rectangle 2: "<<endl;
	cout<<"Length: ";
	cin>>length;
	cout<<"Width: ";
	cin>>width;
	r2.setLength(length);
	r2.setWidth(width);
	cout<<endl<<"Details of Rectangle 1: "<<endl;
	r1.display();
	cout<<endl<<"Details of Rectangle 2: "<<endl;
	r2.display();
	return 0;
}
