//WAP for addition of 2 coordinates using class and object.
#include<iostream>
using namespace std;
class coordinate
{
	private:
		int x;	//x coordinate
		int y; 	//y coordinate
	public:
		void read()
		{
			cout<<"x coordinate: ";
			cin>>x;
			cout<<"y coordinate: ";
			cin>>y;
		}
		void print()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
		void add(coordinate p1, coordinate p2)
		{
			x= p1.x + p2.x;
			y= p1.y + p2.y;
		}
};	//end of class defination
int main()
{
	coordinate p1, p2, p3;
	cout<<"Enter co-ordinates of 1st point: "<<endl;
	p1.read();
	cout<<"Enter co-ordinates of 2nd point: "<<endl;
	p2.read();
	cout<<"P1= ";
	p1.print();
	cout<<"P2= ";
	p2.print();
	p3.add(p1,p2);	//p3= p1+ p2
	cout<<"P3 (P1 + P2)= ";
	p3.print();
}
