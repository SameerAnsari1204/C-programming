#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,ptr,temp;
	cout<<"Enter Array Size : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		ptr=i-1;
		while(temp < a[ptr] && ptr != -1)
		{
			a[ptr+1]=a[ptr];
			ptr-=1;
		}
		a[ptr+1]=temp;
	}cout<<a;
}
