#include<iostream>
using namespace std;
int len(char* str)
{
	int length=0;
	while(*str!='\0')
	{
		length++;
		str++;
	}
	return length;
}

int main()
{
	char str[20];
	cout<<"Enter String : ";
	cin>>str;
	cout<<len(str);
	return 0;
}
