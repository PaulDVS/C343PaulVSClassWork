#include<iostream>
using namespace std;
void input(int a[],int n);
void output(int a[],int n);
void insertionSort(int a[],int n);
int main()
{
	
	int n;
	cout<<"\n Enter the num of elements of array1 = ";
	cin>>n;	
	int *a= new int[n];
	
	input(a,n);
	output(a,n);
	insertionSort(a,n);
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
void insertionSort(int a[],int n)
{
	int i,j,key;
	
	for(i=1;i<n;i++)
	{
		key = a[i];
		j = i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]= a[j];
			j--;
		}
		a[j+1]=key;
	}
}
