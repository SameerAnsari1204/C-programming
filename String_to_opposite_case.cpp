#include<iostream>
#include<cstring>
using namespace std;
int UL(string& str)
{
	int length=str.length();
	for(int i=0;i<length;i++)
	{
	
	int c=str[i];
	if(islower(c))
	{
		str[i]=toupper(c);
	}
	else
	{
		str[i]=tolower(c);
	}
}
}
int main()
{
	string str;
	cout<<"Enter String : ";
	cin>>str;
	
	UL(str);
	cout<<str;
}
