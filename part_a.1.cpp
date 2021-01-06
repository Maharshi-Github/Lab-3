#include<iostream>
using namespace std;

int main()
{
	int r[10],i,n;
	
	for(i=1;i<=10;i++)
	{
		cout<<"\nEnter the values which are multiples of two = ";
		cin>>r[i];
	}
	cout<<"\nThe values of radii are\n";
	for(i=1;i<=10;i++)
	{
		if(r[i]%2==0)
		cout<<"\n"<<r[i];
	}
return 0;	
}

