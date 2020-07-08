#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter I number: ";cin>>a;
	cout<<"Enter II number: ";cin>>b;
	cout<<endl;
	cout<<"Before Swapping : "<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After Swapping : "<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	}
