#include<bits/stdc++.h>
using namespace std;
int fact(int num)
{
	if(num==0 || num==1)
		return(1);
	else
		return num*fact(num-1);	
}
int main()
{
	int n,r;
	cout<<"Enter value of n : \n";
	cin>>n;
	cout<<"Enter value of r : \n";
	cin>>r;
	
	int d=n-r;
	
	cout<<fact(n)/(fact(r) * fact(d));
}
