#include<iostream>
#include<cstring>
using namespace std;

void capitalize(char str[])
{
	int i;
	
	if(strlen(str) > 3)
	{
		for(i=0;i<=strlen(str);i++) 
	   	{ 
	      if(i==1 || i==2)
	      {
			str[i]=str[i]-32;
	      }  
	   	}
	   	cout<<"The string = "<<str;
	}
	else
	{
		cout<<"\nThe string is = "<<str;
	}
}
int main()
{

	char str[10];

	cout<<"\nEnter a string = ";
	cin>>str;
	
	capitalize(str);
}
