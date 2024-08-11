//WAP to input 5 numbers and find the maximum number.
#include<iostream>
using namespace std;
int main()
{
	int nums[5], max=0, i;
	cout<<"Enter any 5 numbers";
	for(i=0;i<5;i++)
	{
		cin>>nums[i];
		if(nums[i]>max)
		{
			max=nums[i];
		}
	}
	cout<<"The maximum number is: "<<max<<endl;
	return 0;
}

