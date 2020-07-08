#include<iostream>
using namespace std;
int main()
{
	int arr[20],i,j,n;
	cout<<"Enter no. of elements : ";
	cin>>n;
	cout<<"Enter elements : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\n";
	}
	
}
