// simple illustration of expectaion handling
#include <iostream>
using namespace std;
int main() {
    try {
        int numerator, denominator;
        
       cout << "Enter numerator: ";
       cin >> numerator;
        
       cout << "Enter denominator: ";
       cin >> denominator;
        
        if (denominator == 0) {
            throw "Division by zero is not allowed.";
        }
        
        float result = numerator / denominator;
       cout << "Result: " << result <<endl;
    } catch (const char* errorMessage) {
       cerr << "Error: " << errorMessage <<endl;
    }
    
    return 0;
}
