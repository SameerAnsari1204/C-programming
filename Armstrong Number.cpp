//armstrong numbers are those numbers represents like -153=1^3+5^3+3^3=153. 
#include<iostream>
using namespace std;
int main()
{
	int num,n,rem,sum=0;
	cout<<"Enter number : ";
	cin>>n;
	
	num=n;
	
	while(num!=0)
	{
		rem=num % 10;
		sum+=rem * rem * rem;
		num/=10;
	}
	
	if(sum == n)
	{
		cout<<n<<" is a Armstrong Number. "<<endl;
	}
	else
	{
		cout<<n<<" is not a Armstrong Number. "<<endl;
	}
}
