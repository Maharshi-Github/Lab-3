#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

void dynamicSort(int arr[],int size)
{
	int i,j,temp;
	j=arr[0];
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

void printArray(int arr[],int size,char *name)
{
	int i;
	
	cout<<"\nStudent's Information:";
	cout<<"\nName \t Score"<<endl;
	cout<<"-------------------------------";
	for(i=0;i<size;i++)
	{
		cout<<"\n"<<name<<" \t "<<arr[i];
	}
}

int main()
{
	int size;
	char *name,arr[20];
	cout<<"\nHow many Test Scores will you Enter?"<<endl;
	cin>>size;
	
	while(size<=0)
	{
		cout<<"\nThe number cannot be less than 1";
		cout<<"\nEnter another number :";
		cin>>size;
	}
		
	
	for(int i=0; i<size; i++)
	{
		cout<<"\nEnter student "<<i+1<<"'s name :";
		cin>>name[i];
		
		cout<<"Enter that student's test score :";
		cin>>arr[i];
		
		while(arr[i]<0)
		{
			cout<<"\nScores cannot be negative ";
			cout<<"\nEnter another score for the test =>";
			cin>>arr[i];
		}
	}
	
	dynamicSort(arr, size);
	printArray(arr,size,name);
}
