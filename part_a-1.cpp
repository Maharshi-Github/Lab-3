#include<iostream>
const int n=5;
using namespace std;

int main()
{
	int i,j;
	char a[n][n];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>j)
			{
				a[i][j]='^';
			}
			else if(i==j) 
			{
		
				a[i][j]='*';
			}
			else if(i<j)
			{
				a[i][j]='-';
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
