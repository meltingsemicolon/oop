// writing into existing file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file("test.txt");
    cout<<"Enter the name : ";
    char name[20];
    cin>>name;
    file<<name<<endl;
}
