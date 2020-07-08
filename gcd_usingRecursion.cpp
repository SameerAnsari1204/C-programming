#include<iostream>
using namespace std;
int gcd(int m,int n)
{
	if(m<n)
	{
		(m,n)=(n,m);
	}
	if(m%n==0)
	{
		return(n);
	}
	else
	{
		return(gcd(n,m%n));
	}
}
int main()
{
	int m,n;
	cout<<"Enter First Number: ";
	cin>>m;
	cout<<"Enter Second Number: ";
	cin>>n;
	cout<<gcd(m,n);
}
