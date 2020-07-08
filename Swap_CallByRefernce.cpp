#include<iostream>
using namespace std;

void swapAdd(int& ,int&);

int main()
{
	int a=1;
	int b=2;
	cout<<"BEFORE SWAP:"<<endl;
	cout<<"a = "<<a;
	cout<<"b = "<<b<<endl;
	swapAdd(a,b);
}
void swapAdd(int& x,int& y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"AFTER SWAP:"<<endl;
	cout<<"x = "<<x;
	cout<<"y = "<<y;
}


