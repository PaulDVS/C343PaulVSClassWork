#include<iostream>
using namespace std;
void input(int a[],int n);
void output(int a[],int n);
int main()
{
	int a[50] = {11,22,33,44};
	int sizeA = 4;
	int b[50] = {1,2};
	int sizeB = 2;
	int c[50] = {32,5,12};
	int sizeC = 3;
	
	int d[50];
	int sizeD = 0;
	
	for(int i=0; i<sizeA || i<sizeB || i<sizeC; i++)
	{
		if(i<sizeA)
		{
			d[sizeD] =a[i];
			sizeD++;
		}
		if(i<sizeB)
		{
			d[sizeD] =b[i];
			sizeD++;
		}
		if(i<sizeC)
		{
			d[sizeD] =c[i];
			sizeD++;
		}
	}


	output(d,sizeD);
	
	
	
	
}void input(int a[],int n)
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
