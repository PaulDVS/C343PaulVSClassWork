#include<iostream>

using namespace std;

int main()
{
	int n;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	
	for(int i=0; i<=n/2;)
	{
		cout<<(n-i)<<" ";
		i++;
		if(i<n/2)
			cout<<(i)<<" ";

	}
	
}
