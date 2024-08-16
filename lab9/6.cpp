//  Wap for writing object to disk file
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
    // Create an object of Person class
    Person person("Abhishek shakya", 20);
    // Open the file in binary mode for writing
    ofstream outFile("person.dat", ios::binary);
    if (!outFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }
    // Write the object directly to the file
    outFile.write(reinterpret_cast<char*>(&person), sizeof(Person));
    outFile.close();
    cout << "Person object written to file." << endl;
    return 0;
}
