#include<iostream>
using namespace std;
int main()
{
	int arr[20],n,i,max,min;
	cout<<"Enter no. of elements : ";
	cin>>n;
	cout<<"Enter elements : ";
	for(i=0;i<n;i++)
	
		cin>>arr[i];
	
	max=arr[i];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	min=arr[0];
	for(i=0; i<n; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout<<"Largest Element in Array is : "<<max<<endl;
	cout<<"Smallest Element in Array is : "<<min<<endl;
}
