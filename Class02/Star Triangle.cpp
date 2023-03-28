#include<iostream>

using namespace std;

int main()
{
	int n;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	for(int i = n; i>=1; i--)
	{
		for(int j = 1; j<=i; j++)
		{
			if(i==n||j==1||i==j)
			{
				cout<<"*\t";
			}
			else
			{
				cout<<"\t";
			}
		}
		cout<<"\n";
	}
	
}
