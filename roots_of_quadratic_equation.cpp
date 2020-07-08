#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	double qeplus,qeminus;
	cout<<"Enter Coefficient of x^2 ";
	cin>>a;
	cout<<"Enter Coefficient of x ";
	cin>>b;
	cout<<"Enter Constant c ";
	cin>>c;
	
	qeplus=((-b)+sqrt(b*b-4*a*c))/(2*a);
	qeminus=((-b)-sqrt(b*b-4*a*c))/(2*a);
	
	cout<<qeplus<<" & "<<qeminus;
}
