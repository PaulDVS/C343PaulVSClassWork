#include<iostream>
using namespace std;
void input(int a[],int n);
void output(int a[],int n);
int main()
{
	
	int n;
	int flag;
	
	cout<<"\n Enter the num of elements of array = ";
	cin>>n;	
	int *a= new int[n];
	int *key= new int[n];
	int keySize = 0;
	int *counter= new int[n];
	
	input(a,n);
	output(a,n);

	cout<<"\n";
	
	for(int i=0; i<n; i++)
	{
		flag = 0;
		for(int j=0; j<=keySize && flag<1; j++)
		{
			if(j==keySize)
			{
				key[j] = a[i];
				counter[j] = 1;
				keySize++;
				flag = 1;
			} 
			else if(key[j] == a[i])
			{
				counter[j] +=1;
				flag = 1;
			}
		}
	}
	
	for(int j=0; j<keySize; j++)
	{
		cout<<key[j]<<" "<<counter[j]<<endl;
	}
	
	cout<<"Number frequency = num \n";
	for(int j=0; j<keySize; j++)
	{
		if(key[j] == counter[j])
		{
			cout<<key[j]<<" "<<counter[j]<<endl;
		}
	}
	
		
	
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
