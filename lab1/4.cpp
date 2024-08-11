//Write a program using the new and delete operator.
#include <iostream>
using namespace std;

int main()
{
    // Declare a pointer to an int
    int *ptr;

    // Allocate memory for an int using the new operator
    ptr = new int;

    // Check if the allocation was successful
    if (ptr == nullptr)
    {
        // If not, print an error message and exit the program
        cout << "Memory allocation failed" << endl;
        return 1;
    }

    // If yes, assign a value to the allocated memory
    *ptr = 42;

    // Print the value and the address of the allocated memory
    cout << "The value is " << *ptr << endl;
    cout << "The address is " << ptr << endl;

    // Deallocate the memory using the delete operator
            delete ptr;

    // Set the pointer to null to avoid dangling pointer
    ptr = nullptr;

    return 0;

}