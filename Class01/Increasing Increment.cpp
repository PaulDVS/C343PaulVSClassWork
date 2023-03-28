#include<iostream>

using namespace std;

int main()
{
	int n;
	int x=0;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	for(int i=1; i<=n; i++)
	{
		x+=i;
		cout<<(x)<<" ";
	}
	
}
