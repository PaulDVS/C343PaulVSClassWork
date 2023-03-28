#include<iostream>

using namespace std;

int main()
{
	int n;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	for(int i = 1; i<=2*n-1; i++)
	{
		for(int j =1; j<= 2*n-1;j++)
		{
			if((j>=n-i+2 && j<=n+i-2) && (i>1 && i <=n) || (j>=i-n+2 && j<=3*n-i-2) && (i>=n && i <2*n-1))
			{
				cout<<"  ";
			}
			else
			{
				cout<<"* ";
			}
		}
		cout<<"\n";
	}	
}
