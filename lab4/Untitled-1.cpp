#include <iostream>
using namespace std;

class Coordinate {
private:
    int x;
    int y;

public:
    Coordinate(int x = 0, int y = 0) : x(x), y(y) {}

     Coordinate operator+(int c2){
        x=x+c2.x;
        y=y+c2.y;
    }


    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Coordinate c1;
    Coordinate c2(4, 5);
    Coordinate sum = c1 + c2;

    sum.display();

    return 0;
}
