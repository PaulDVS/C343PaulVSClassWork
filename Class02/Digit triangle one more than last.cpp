#include<iostream>

using namespace std;

int main()
{
	int n;
	int x = 1;
	int incrementer = 1;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	for(int i = 1; i<=n; i++)
	{
		for(int j = 1; j <=n-i; j++)
		{
			cout<<x<<" ";
			x+= incrementer;
		}
		cout<<x<<" ";
		x+=1;
		incrementer = incrementer*(-1);
		cout<<"\n";
	}	
}
