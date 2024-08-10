/*WAP to get below output:

NAME             ADDRESS

  RAM              PATAN

 SHYAM                KOTESHWAR */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare and initialize the variables
    string name1 = "RAM";
    string name2 = "SHYAM";
    string address1 = "PATAN";
    string address2 = "KOTESHWAR";

    // Set the width and alignment of the output
    cout << setw(15) << left << "NAME" << setw(15) << left << "ADDRESS" << endl;

    // Print the values of the variables
    cout << setw(15) << left << name1 << setw(15) << left << address1 << endl;
    cout << setw(15) << left << name2 << setw(15) << left << address2 << endl;

    return 0;
}
