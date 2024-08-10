
#include <iostream>
class Counter {
private:
  int count;

public:
  Counter(int initialValue = 0) : count(initialValue) {}

  // Overloading pre-increment operator
  Counter operator++() {
    count++;
    return *this;
  }

  // Overloading post-increment operator
  Counter operator++(int) {
    Counter temp(count);
    count++;
    return temp;
  }

  void display() const {
    std::cout << "\n"<<count;
  }
};

int main() {
  Counter c1(5);

  ++c1;       // Pre-increment
  c1.display();  // Output: 6

  Counter c2 = c1++;  // Post-increment
  c1.display();      // Output: 7
  c2.display();      // Output: 6

  return 0;
}
