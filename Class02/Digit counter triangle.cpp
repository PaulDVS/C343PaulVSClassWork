#include<iostream>

using namespace std;

int main()
{
	int n;
	int x = 1;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	for(int i = 1; i<=n; i++)
	{
		for(int j = 0; j<i; j++)
		{
			cout<<(x)<<" ";
			x++;
		}
		cout<<"\n";
	}
	
}
