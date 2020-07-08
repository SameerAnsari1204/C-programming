#include<iostream>
using namespace std;
#define N 4
#define M 4
int min(int mat[N][M])
{
	int minElement=mat[0][0];
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(mat[i][j] < minElement)
			{
				minElement=mat[i][j];
			}
		}
	}
	return minElement;
	
}
int max(int mat[N][M])
{
	int maxElement=mat[0][0];
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(mat[i][j] > maxElement)
			{
				maxElement = mat[i][j];
			}
		}
	}
	return maxElement;
	
}
int main()
{
	int mat[N][M]={ {1,2,3,4},
	{5,6,200,8},{9,-85,11,12},{13,14,15,16}};
	
	cout<<"Largest Element : "<<max(mat)<<endl;
	cout<<"Smallest Element :"<<min(mat)<<endl;
}
