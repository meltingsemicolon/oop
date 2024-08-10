//WAP to demonstrate Pointer.
#include <iostream>
using namespace std;
int main()
{   
    int  num=7;
    int *ptr=&num;
    cout<<"value and adress of num: "<< num <<" "<<&num<<endl ;
    cout<<"pointer adress: "<<&ptr<<endl;
    cout<<"pointer value: "<<*ptr<<endl;
    cout<<"ADRESS in pointer: "<<ptr<<endl;
    delete ptr;
    ptr=nullptr;
}