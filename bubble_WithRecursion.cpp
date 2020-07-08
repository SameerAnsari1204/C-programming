#include<iostream>
using namespace std;
int swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int bubble(int arr[20], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}
void Sorted(int arr[],int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<"\n";
	}
}
int main()
{
	int arr[20],n;
	cout<<"Enter no. of elements : ";
	cin>>n;
	cout<<"Enter elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Sorted Array : ";
	bubble(arr, n);
	Sorted(arr,n);
}
