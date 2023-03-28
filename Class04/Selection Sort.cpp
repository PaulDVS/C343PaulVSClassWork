#include<iostream>
using namespace std;

void input(int a[],int n);
void output(int a[],int n);
void selectionSort(int a[],int n);

int main()
{
	
	int n;
	cout<<"\n Enter the num of elements of array1 = ";
	cin>>n;	
	int *a= new int[n];
	
	input(a,n);
	output(a,n);
	selectionSort(a,n);
	output(a,n);
		
	
}
void input(int a[],int n)
{
	cout<<"\n Enter the elements = \n";
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void output(int a[],int n)
{
	cout<<"\n The elements = \t";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}
void selectionSort(int a[],int n)
{
	int i,j,min,minIndex;
	
	for(i=0; i<n-1; i++)
	{
		min = a[i];
		minIndex = i;
		
		for(j=i+1; j<n; j++)
		{
			if(a[j]<min)
			{
				min = a[j];
				minIndex = j;
			}
		}
		
		a[minIndex] = a[i];
		a[i] = min;
	}
}
