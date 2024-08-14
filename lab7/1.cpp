//  WAP for Binary operator overloading->x1+x2=x,y1+y2=y
#include <iostream>
using namespace std;

class point{
    int x,y;
    public:
    point() {}
    point(int xVal,int yVal){
        x=xVal;
        y=yVal;
    }
    point operator+(const point& other){
        int sumX = this->x + other.x;
        int sumY = this->y + other.y;
        return point(sumX,sumY);
    }
    void getData(){
        cin>>x>>y;
    }
    void display() const {
        cout<<"x:"<<x<<",y:"<<y<<endl;
    }
};
int main()
{
    point p1;
    point p2;
    cout<<"Enter point p1:\n";
    p1.getData();
    cout<<"Enter point p2:\n";
    p2.getData();


    point p3=p1+p2;
    p1.display();
    p2.display();
    p3.display();
    return 0;
}