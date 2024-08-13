// wap to adress the below problem using class and object concept by using friend function.
//  hr       min
//  a        b
// +d        e
//  x        y
#include <iostream>
using namespace std;

class Time {
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    void displayTime() {
        cout << "Time: " << hours << " hr " << minutes << " min" << endl;
    }

    friend Time operator+(const Time& t1, const Time& t2);
};

Time operator+(const Time& t1, const Time& t2) {
    Time sum;
    sum.minutes = t1.minutes + t2.minutes;
    sum.hours = t1.hours + t2.hours + (sum.minutes / 60);
    sum.minutes %= 60;
    return sum;
}

int main() {
    Time t1(1, 30);
    Time t2(0, 45);
    Time t3;

    t3 = t1 + t2; // using the overloaded '+' operator through the friend function

    t1.displayTime();
    t2.displayTime();
    t3.displayTime();

    return 0;
}
