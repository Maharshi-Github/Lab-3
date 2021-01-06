#include<iostream>
#include<ctype.h>
using namespace std;

void toggle(int pos,char str[])
{
	int i;
	for(i=0; str[i]!='\0'; i++)
	{
		if(i==pos)
		{
			if(isalpha(str[i]) == 0)
			{
				cout<<"\nThe character at the given position is not a letter";
			}
			else
			{
				if(isupper(str[i]) == 0)
				{
					
					str[i] = str[i]-32; 
				}
				else
				{
					str[i] = str[i]+32;
				}
			}
		}
	}
	cout<<"\nThe changed string is :"<<str;
}

int main()
{
	int pos;
	char str[10];

	cout<<"\nEnter a string =>";
	cin>>str;
	cout<<"\nEnter the position of the character to be toggled =>";
	cin>>pos;
	
	toggle(pos,str);
}
