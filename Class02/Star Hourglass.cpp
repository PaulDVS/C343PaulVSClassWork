#include<iostream>

using namespace std;

int main()
{
	int n;
	int mid;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	if(n%2==0)
	{
		mid=n/2;
	}
	else
	{
		mid=n/2+1;
	}
	
	for(int i = 1; i<=n; i++)
	{
		for(int j =1; j<=n;j++)
		{
			if( ((i-j<=0)&&(j<=mid)&&(i<=mid)) || ((i+j<=n+1)&&(j>=n-mid+1)&&(i<=mid)) )
			{
				cout<<"* ";
			}
			else if ( ((i+j>=n+1)&&(j<=mid)&&(i>=n-mid+1)) || ((i-j>=0)&&(j>=n-mid+1)&&(i>=n-mid+1)) )
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
