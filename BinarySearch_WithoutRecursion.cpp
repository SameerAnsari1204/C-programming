#include<iostream>
using namespace std;
int main()
{
	int k,arr[30],n,first,last,mid;
	cout<<"Enter size of array:\n";
	cin>>n;
	cout<<"Enter nos:\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter number to be searched:\n";
	cin>>k;
	first=0;
	last=n-1;
	mid=(first+last)/2;
	while(first<=last)
	{
		if(arr[mid] < k)
		{
			first=mid+1;
		}
		else if(arr[mid]==k)
		{
			cout<<"Element found at "<<mid+1;
			break;
		}
		else if(arr[mid] > k)
		{
			last=mid-1;
		}
		mid=(first+last)/2;
	}
		if(first>last)
		{
			cout<<"Not Found in Array";
		}
	return 0;
}
