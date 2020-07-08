#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter Year : ";
	cin>>year;
	if((year%400==0)||(year%4==0 && year%100!=0))
	{
		cout<<year<<" is a leap Year";
	}
	else
	{
		cout<<year<<" is not a leap Year";
	}
}
