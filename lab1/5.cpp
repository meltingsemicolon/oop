//WAP to illustrate Pass by reference and return by reference.
#include <iostream>
using namespace std;
int k=5,j=15;
int &setw();
void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main (void)
{
  int a=10,b=12;
  cout<<"pass by reference"<<endl;
  cout<<"Before swapping a="<<a<<"and b="<<b<<endl;
  swap(a,b);
    cout<<"After Swapping: a="<<a<<" and b="<<b<<endl;
 cout<<"return by reference"<<endl;
int &setx();
setx()=j;
cout<<"From Main k="<<k<<endl;

}
int &setx()
{
//display global value of k
cout<<endl<<"From Function k="<<k<<endl;
return k;
}