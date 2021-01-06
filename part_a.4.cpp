#include<iostream>
using namespace std;
#define PI 3.14

void printArray(int n,int radii[], float cArea[])
{
	int i;
	cout<<"\n\nRadii \tArea";
	for(i=0; i<n; i++)
	{
		cout<<"\n"<<radii[i]<<"\t"<<cArea[i];
	}
}

void findArea(int radii[],int n)
{
	float cArea[10];
	int mul;
	
	for(int i=0; i<n; i++)
	{
		mul = radii[i] * radii[i];
		cArea[i] = PI * mul;
	}
	
	printArray(n,radii,cArea);
}

int main()
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
		if(r[i]%2==0)
			cout<<"\n"<<r[i];
	}
	
	findArea(r,n);

	return 0;
}
