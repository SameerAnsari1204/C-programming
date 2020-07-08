#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[20];
	int i,length,flag=0;
	cout<<"Enter String: ";
	cin>>str;
	length=strlen(str);
	for(i=0; i<length; i++)
	{
		if(str[i]!=str[length-1-i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<str<<" is not palindrome"<<endl;
		}
	else
	{
		cout<<str<<" is a palindrome"<<endl;
		}	
}
