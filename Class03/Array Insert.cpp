#include<iostream>
using namespace std;
void input(int a[],int n);
void output(int a[],int n);
int main()
{
	int n=0;
	int a[20];
	
	int value;
	int newPos;
	
		
	do
	{
		cout<<"Please input a value \n";
		cin>>value;
		cout<<"\n";
		
		newPos=0;
		
		do
		{
			cout<<"Please input a position between 1 and "<<n+1<<" \n";
			cin>>newPos;
			cout<<"\n";
		}while(newPos<1 || newPos>n+1);
		
		if(newPos == n+1){
			a[newPos-1] = value;
		}
		else
		{
			for(int i=n; i>=newPos-1; i--)
			{
				a[i+1] = a[i];
			}
			a[newPos-1] = value;
		}
		
		n++;
		
		output(a, n);
		
	}while(n < 20);
	
	output(a, n);
}
void input(int a[],int n)
{
	cout<<"Enter the elements = \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cout<<("\n");
	}
}
void output(int a[], int n)
{
	cout<<"The elements = \n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
		
	cout<<"\n";
	cout<<"\n";
}
