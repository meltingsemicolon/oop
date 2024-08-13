//WAP to illustrate the example of pointer to class.
#include<iostream>
using namespace std;
class Rectangle
{
	int width, height;
	public:
		Rectangle (int x, int y) : width(x), height(y) {}
		int area()
		{
			return width*height;
		}
};
int main()
{
	Rectangle R1(3,4);
	Rectangle *Ptr1, *Ptr2, *Ptr3;	//pointers to obj
	Ptr1 = &R1;
	Ptr2 = new Rectangle(5,6);
	Ptr3 = new Rectangle[2] { {2,5}, {3,6} };
	cout<<"R1's area: "<<R1.area()<<endl;
	cout<<"*Ptr1's area: "<<Ptr1->area()<<endl;
	cout<<"*Ptr2's area: "<<Ptr2->area()<<endl;
	cout<<"*Ptr3[0]'s area: "<<Ptr3[0].area()<<endl;
	cout<<"*Ptr3[1]'s area: "<<Ptr3[1].area()<<endl;
	delete Ptr2;
	delete[] Ptr3;
}
