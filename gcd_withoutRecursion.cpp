#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter I number: ";
	cin>>m;
	cout<<"Enter II number: ";
	cin>>n;
	while(m!=n)
	{
		if(m>n)
		{
			m-=n;
		}
		else
		{
			n-=m;
		}
		cout<<"GCD = "<<m;		
	}
}
