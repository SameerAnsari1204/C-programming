#include<iostream>
using namespace std;
int main()
{
	int per;
	cout<<"Enter percentage : ";
	cin>>per;
	
	if(per>100)
	{
		cout<<"INCORRECT DATA";
	}
	else if(per>=60 && per<=100)
	{
		cout<<"FIRST";
	}
	else if(per>=50 && per<60)
	{
		cout<<"SECOND";
	}
	else if(per>=40 && per<50)
	{
		cout<<"THIRD";
	}
	else 
	{
		cout<<"FAILED";
	}
}
