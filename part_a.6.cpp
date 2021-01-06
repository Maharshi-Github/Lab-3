#include<iostream>
using namespace std;

void checkArray(int arr[],int size, int n)
{
	int i;
	
	for(i=0 ;i<size; i++)
	{
		if(arr[i]>n)
		{
			cout<<arr[i]<<"  -  a["<<i<<"]"<<endl;
		}
	}
}

int main()
{
	int arr[10],size,n;
	int i;
	
	cout<<"\nEnter the size for the Array =>";
	cin>>size;	
	
	cout<<"\nEnter the array elements =>";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\nEnter a number to check with the array =>";
	cin>>n;
	
	checkArray(arr,size,n);
	return 0;
}
