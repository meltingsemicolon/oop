//WAP to illustrate local and global variable.
#include <iostream>
using namespace std;
int globalVariable = 10;

void myFunction() {
    int localVariable = 20;
    
   cout << "Local variable value: " << localVariable << endl;
    cout << "Global variable value: " << globalVariable <<endl;
}

int main() {
    myFunction();
    
    cout << "Global variable value: " << globalVariable << endl;

    return 0;
}