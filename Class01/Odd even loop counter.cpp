#include<iostream>

using namespace std;

int main()
{
	int n;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	if(n%2 == 0)
	{
		for(int i = n+2; i>n-2; i--)
		{
			cout<<(i)<<" ";
		}
		for(int i = 1; i< n-1;i++)
		{
			cout<<(i)<<" ";
		}
	}
	else
	{
		for(int i=n; i>n/2;i--)
		{
			cout<<(i)<<" ";
		}
		for(int i=1; i<=n/2; i++)
		{
			cout<<(i)<<" ";
		}
	}	
	
	
}
