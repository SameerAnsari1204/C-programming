#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void selection(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
	int min=i;
	for(int j=i+1; j<n; j++)
	{
		if(arr[j] < arr[min])
		{
			min = j;
		}
	}
		swap(&arr[min],&arr[i]);
	}
}

void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
}

int main()
{
	int arr[20],n;
	cout<<"Enter no. of elements : ";
	cin>>n;
	cout<<"Enter elements in array : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout << "Sorted array: \n";
	selection(arr,n);
    display(arr, n);
}
