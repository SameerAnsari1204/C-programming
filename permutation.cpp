#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	if(n==0 || n==1)
	return(1);
	else
	return n*fact(n-1);
}
int main()
{
	int n,r;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"Enter r : ";
	cin>>r;
	
	cout<<fact(n)/fact(n-r);
}
