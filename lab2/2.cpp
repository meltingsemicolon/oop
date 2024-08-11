// Write a program showing use of array and pointer.
#include <iostream>
using namespace std;
int main()
{
    int a[5]={10,12,15,14,20};
    int *b;
    b=&a[0];
    int i;
    for(i=0;i<5;i++)
    cout<<"a["<<i<<"]="<<a[i]<<",";
    cout<<endl;
    for(i=0;i<5;i++)
    cout<<"*(b+"<<i<<")="<<*(b+i)<<",";
    cout<<endl;
    for(i=0;i<5;i++)
    cout<<"*(a+"<<i<<")="<<*(a+i)<<",";
    cout<<endl;
    for(i=0;i<5;i++)
    cout<<"b["<<i<<"]="<<b[i]<<",";
    cout<<endl<<endl;
    for(i=0;i<5;i++)
    cout<<"(a+"<<i<<")="<<(a+i)<<",";
    cout<<endl;
    for(i=0;i<5;i++)
    cout<<"(b+"<<i<<")="<<(b+i)<<",";
    cout<<endl;
}