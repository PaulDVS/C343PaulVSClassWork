#include<iostream>

using namespace std;

int main()
{
	int n;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	for(int i = 0; i<2*n; i++)
	{
		for(int j =1; j<= 2*n-1;j++)
		{
			if(j==n-i || j==n || j==n+i || i == n-1 )
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}	
}
