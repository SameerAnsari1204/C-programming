#include<iostream>
using namespace std;
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	return;
}
int main()
{
	int a,b;
	cout<<"Enter I number: ";
	cin>>a;
	cout<<"Enter II number: ";
	cin>>b;
	cout<<"Before Swap a = "<<a<<" b = "<<b;
swap(a,b);
{
	cout<<"After Swap a = "<<a<<" b = "<<b;
}
}
