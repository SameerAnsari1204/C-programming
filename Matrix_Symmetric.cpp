#include<iostream>
using namespace std;
int main()
{
	int a[10][10],transposed[10][10],c,r,i,j,flag=0;
	cout<<"Enter no. of rows and columns : "<<endl;
	cin>>c>>r;
	cout<<"Enter matrix elements :\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<endl<<"Origional Matrix\n"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<" "<<a[i][j];
			if(j==c-1)
			cout<<endl<<endl;
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			transposed[j][i]=a[i][j];
		}
	}
	cout<<endl<<"Transposed Matrix\n"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<" "<<transposed[i][j];
			if(j==r-1)
			cout<<endl<<endl;
		}
}
	//checking symmetricity
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(transposed[i][j]!=a[i][j])
			
					flag=1;
		}
	}
	if(flag)
		cout<<"Assymmetric";
	else
		cout<<"Symetric";
			
}
