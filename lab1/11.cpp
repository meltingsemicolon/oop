//WAP using function with default argument.
#include<iostream>
using namespace std;
int interest_cal (float p, float t=0.5, float r=6)
{
	return (p*t*r)/100.0;
}
int main()
{
	cout<<"Input Principle Amt: ";
	float p;
	cin>>p;
	cout<<"Input Time for interest: ";
	float t;
	cin>>t;
	cout<<"Input Rate of interest: ";
	float r;
	cin>>r;
	cout<<"Interest with input p, t and r: ";
	cout<<interest_cal(p,t,r)<<endl;
	cout<<"Interest with input p and t: ";
	cout<<interest_cal(p,t)<<endl;
	cout<<"Interest with input p only: ";
	cout<<interest_cal(p);
	return 0;
}

