#include<iostream>

using namespace std;

int main()
{
	int n;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	for(int i = n; i>0; i--)
	{
		for(int j = i; j>0; j--)
		{
			cout<<(j)<<" ";
		}
		cout<<"\n";
	}
	
}
