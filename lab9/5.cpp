// Wap for writing and reading variables in files using binary mode.
#include <iostream>
#include <fstream>
using namespace std;

struct Person
{
    string name;
    int age;
};

int main()
{
    // Writing variables to a file in binary mode

    ofstream outputFile("data.bin", ios::binary);

    if (outputFile.is_open())
    {
        Person person = {"Abhihsek shakya", 20};

        // Write the data as a block of memory to the file
        outputFile.write(reinterpret_cast<const char *>(&person), sizeof(Person));

        outputFile.close();

        cout << "Data written to the file successfully." << endl;
    }
    else
    {
        cout << "Failed to open the file for writing." << endl;
        return 1;
    }

    // Reading variables from a file in binary mode

    ifstream inputFile("data.bin", ios::binary);

    if (inputFile.is_open())
    {
        Person person;

        // Read the data as a block of memory from the file
        inputFile.read(reinterpret_cast<char *>(&person), sizeof(Person));

        inputFile.close();

        cout << "Name: " << person.name << endl;
        cout << "Age: " << person.age << endl;
    }
    else
    {
        cout << "Failed to open the file for reading." << endl;
        return 1;
    }

    return 0;
}
//  The reinterpret_cast<char*> is used to interpret the memory of
//  the object as a sequence of characters (bytes) when reading from or writing to a file in binary mode.
// // In C++, the reinterpret_cast operator allows you to convert betwee
// n different pointer types, and in this case, we are converting the Person* pointer to a char* pointer
// so that we can treat the data as a sequence of bytes.
// // When we use reinterpret_cast<char*>(&person), we are effectively telling
// the compiler to treat the memory occupied by the person object as a sequence of characters (bytes)
// , which allows us to read or write the entire object directly to/from a file without any serialization or conversion.
// // Please note that using reinterpret_cast should be done with caution, a
//  it bypasses type safety checks and can lead to undefined behavior if used
//  incorrectly. However, in cases where we are working with binary data and need to read or write variables directly,
//  it is a commonly used approach.
