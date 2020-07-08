#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str1[20],str2[20],str3[20];
	cout<<"Enter string 1 : \n";
	cin>>str1;
	
	cout<<"Enter string 2 : \n";
	cin>>str2;
	
	//strcpy(destination,source)
	
	strcpy(str3,str2);
	cout<<"Passing value of string 2 to string 3 : "<<str3;
}
