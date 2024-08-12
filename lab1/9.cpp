//WAP that converts a temperature from Celsius to Fahrenheit. [Hint:  C = 5/9(F-32)]
#include <iostream>
using namespace std;
int main(){
    float cels,fara;
    cout<<"Enter the temperature in celsius:";
    cin>>cels;
    fara=(cels*9/5)+32;
       cout << "Temperature in Fahrenheit: " << fara << endl;
    return 0;
}