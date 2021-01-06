#include<iostream>
using namespace std;

main()
{
	int r[10],i,n=10;
	
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter the values which are multiples of two = ";
		cin>>r[i];
	}
	cout<<"\nThe values of radii are\n";
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		{
			cout<<r[i];	
		}
		else
		{
			cout<<r[i]<<",";
		}
	}	
}

