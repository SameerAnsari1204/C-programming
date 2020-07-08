#include<iostream>
using namespace std;
int fib(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	else
	{
		return fib(n)+fib(n-2);
	}
}
int main()
{
	int n,i=0;
	cout<<"Input number ";
	cin>>n;
	while(i<n+1)
	{
		cout<<" "<<fib(i);
		i++;	
	}
	return 0;
}
