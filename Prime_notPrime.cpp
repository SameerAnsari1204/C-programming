#include<iostream>
using namespace std;
int main()
{
	int num,i;
	bool Prime=true;
	cout<<"Enter number: ";
	cin>>num;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			Prime=false;
		}
	}
	if(Prime)
	{
		cout<<num<<" is a prime number.";
	}
	else
	{
		cout<<num<<" is not a prime number.";
	}
}
