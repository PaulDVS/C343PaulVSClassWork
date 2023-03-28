#include<iostream>

using namespace std;

int main()
{
	int n;
	int mid;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	if(n%2==0){
		mid=n/2;
	}
	else
	{
		mid=(n/2)+1;
	}
	
	for(int i = 1; i<=n; i++)
	{
		for(int j=1; j<=i, j<=mid;j++)
		{
			if(j==1 || j==i || j==n-i+1)
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
