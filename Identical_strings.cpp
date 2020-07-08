#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s1[200],s2[200];
	
	cout<<"Enter I string : ";
	cin>>s1;
	
	cout<<"Enter I string : ";
	cin>>s2;
	
	if(strcmp(s1,s2)==0)
	{
		cout<<"Both Strings are Identical. "<<endl;	
	}
	else
	{
		cout<<"Strings are not Identical. "<<endl;
	}
}
