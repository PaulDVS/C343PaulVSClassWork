#include<iostream>
using namespace std;
void input(int a[],int n);
void output(int a[],int n);
void bubbleSort(int a[],int n);

int main()
{
	int n;
	
	cout<<"\n Enter n value =";
	cin>>n;
	
	int a[n];
	
	input(a,n);
	output(a,n);
	bubbleSort(a,n);
	output(a,n);
	
}
void input(int a[],int n)
{
	cout<<"\n Enter the elements = ";
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void output(int a[],int n)
{
	cout<<"\n The elements = ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}
void bubbleSort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
