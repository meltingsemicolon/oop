// Wap for reading object from disk file
#include <iostream>
#include <fstream>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string n = "", int a = 0) : name(n), age(a) {}
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Person person;
    // Open the file in binary mode for reading
    ifstream inFile("person.dat", ios::binary);
    if (!inFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }
    // Read the object directly from the file
    inFile.read((char*)(&person), sizeof(Person));
    if (!inFile) {
        cerr << "Error reading from file." << endl;
        return 1;
    }
    person.display();
    inFile.close();
    return 0;
}
