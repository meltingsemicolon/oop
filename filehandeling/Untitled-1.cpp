#include <iostream>
#include <fstream>
using namespace std;
class MyClass {
public:
    int value;
    string name;

    // Default constructor
    MyClass() {}

    // Parameterized constructor
    MyClass(int v, string n) : value(v), name(move(n)) {}

    // Method to display object values
    void display() const {
        cout << "Value: " << value << ", Name: " << name << endl;
    }

    // Serialization function to write object to file
    void serialize(const string& filename) const {
        ofstream file(filename, ios::binary);
        if (file) {
            file.write(reinterpret_cast<const char*>(this), sizeof(*this));
            file.close();
            cout << "Object serialized successfully!" << endl;
        } else {
            cerr << "Error writing to file." << endl;
        }
    }

    // Deserialization function to read object from file
    void deserialize(const string& filename) {
        ifstream file(filename, ios::binary);
        if (file) {
            file.read(reinterpret_cast<char*>(this), sizeof(*this));
            file.close();
            cout << "Object deserialized successfully!" << endl;
        } else {
            cerr << "Error reading from file." << endl;
        }
    }
};

int main() {
    // Create an object
    MyClass obj(42, "Genie");

    // Serialize the object
    obj.serialize("object.bin");

    // Clear object values
    obj.value = 0;
    obj.name.clear();

    // Deserialize the object
    obj.deserialize("object.bin");

    // Display deserialized object values
    obj.display();

    return 0;
}
