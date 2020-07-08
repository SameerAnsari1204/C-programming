#include<iostream>
using namespace std;
int linear(int arr[],int k,int n)
{
	for(int i=0;i<n;i++)

		if(arr[i]==k)
		
			return i;
		
		return -1;
}
int main()
{
	int arr[20],k;
	int n;
	cout<<"Enter no. of elements ";
	cin>>n;
	cout<<"Enter Elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter key : ";
	cin>>k;
	
	int result = linear(arr, k, n); 
   (result == -1)? cout<<"Element is not present in array" 
                 : cout<<"Element is present at index " <<result+1; 
   return 0; 
}
