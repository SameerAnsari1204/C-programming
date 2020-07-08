#include<iostream>
using namespace std;
int main()
{
	int a[10][10],tp[10][10],r,c,i,j;
	cout<<"Enter rows and columns of matrix : ";
	cin>>r>>c;
	
	cout<<"Enter elements of matrix :\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	//display origional matrix
	cout<<"Origional matrix : "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<" "<<a[i][j];
			if(j==c-1)
				cout<<endl<<endl;
		}
	}
	//transpose matrix
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			tp[j][i]=a[i][j];
		}
	}
	//displaying transposed matrix
	cout<<endl<<"transposed matrix : "<<endl;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			cout<<" "<<tp[i][j];
			if(j==r-1)
				cout<<endl<<endl;
		}
	}
}
