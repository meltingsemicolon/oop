// illustration of function template
#include <iostream>
using namespace std;

template <class T>
T cmp(T a,T b)
{   
    return (a>b?a:b);
};
int main()
{   int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"\nThe greater number is: "<<cmp(a,b);
}
