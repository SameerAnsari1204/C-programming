#include<iostream>
using namespace std;
int pow(int m,int n)
{
	if(n==0)
	{
		return 1;
	}	
	else
	{
		return m*pow(m,n-1);
	}
}
int main()
{
	int m,n;
	cout<<"Enter Number: ";
	cin>>m;
	cout<<"Enter Power: ";
	cin>>n;
	cout<<pow(m,n);
}
