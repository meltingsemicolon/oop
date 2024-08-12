//Write a program to demonstrate pointer arithmetic.
#include <iostream>
using namespace std;
int main() {
  int numbers[5] = {10, 20, 30, 40, 50};

  // Declaring a pointer to the first element of the array
  int* ptr = numbers;

  // Accessing array elements using pointer arithmetic
  cout << "Array elements using pointer arithmetic:\n";
  for (int i = 0; i < 5; i++) {
    cout << "Element " << i << ": " << *(ptr + i) <<endl;
  }

  // Incrementing the pointer and accessing elements
  cout << "\nIncrementing the pointer:\n";
  for (int i = 0; i < 5; i++) {
    cout << "Element " << i << ": " << *ptr++ << endl;
  }

  return 0;
}