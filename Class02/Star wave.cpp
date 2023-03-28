#include<iostream>

using namespace std;

int main()
{
	int n;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	for(int i = 0; i<=2*n-2; i++)
	{
		for(int j =1; j<= 4*n-3;j++)
		{
			if(j==n-i || j==n+i || j==5*n-4-i )
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
