#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n;
	double sum=0.0;
	cout<<"Enter n : ";
	cin>>n;
	
	for(double i=1;i<=n;i++)
	{
		sum = sum + 1/i;
	}
	cout<<sum;
}
