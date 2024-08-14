// uniary operator overloading.
#include <iostream>
class Number {
private:
  int value;

public:
  Number(int val) : value(val) {}

  Number operator-() const {
    return Number(-value);
  }

  void display() const {
    std::cout << value;
  }
};

int main() {
  Number num1(5);
  Number num2 = -num1;

  num2.display(); // Output: -5

  return 0;
}
