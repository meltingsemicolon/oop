//Wap a programm to add the area of a rectangle using the concept of constructor.
#include <iostream>
using namespace std;
class Rectangle
{
    private:
    double len,wid,area;
    public:
    Rectangle()
    {
        len = 6;
        wid = 7; 
        area=0;
    }// constructor
    double getData()
    {
        cin>>len>>wid;
        return 0;
    }
    double putData()
    {
        cout<<"length="<<len<<"width="<<wid<<endl;
        return 0;
    }
    double calArea()
    {
     area=len*wid;
     return area; 
    }
    double sum(Rectangle r2)
    {
     return (area + r2.area);
    }
};
int main ()
{   
    double Area;
    Rectangle r1,r2;
    cout<<"Enter dimension of rectangles"<<endl;
    r2.getData();
    r1.calArea();
    r2.calArea();
    cout<<"The sum of the areas of rectangle is: " ;
    Area=r1.sum(r2) ;
    cout<< Area<<endl;
    return 0;
}