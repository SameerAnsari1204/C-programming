#include<iostream>
using namespace std;
int main()
{
	int arr[20],k,flag=0;
	int n;
	cout<<"Enter no. of elements ";
	cin>>n;
	cout<<"Enter Elements : ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter key : ";
	cin>>k;
	for(int i=0; i<n; i++)
	{
		if(arr[i]==k)
		{
			cout<<"Element found at : "<<i+1<<"\n";
			flag=1;
		}
	}
	if(!flag)
		cout<<"Element not found";
}
