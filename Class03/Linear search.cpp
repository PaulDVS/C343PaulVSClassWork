#include<iostream>

using namespace std;

int main()
{
	int n, sk, flag=0;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	int a[n];
	
	cout<<"Enter the element ";
	for(int i=0, int<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n";
	
	cout<<"Enter the key value: ";
	cin>>sk;
	cout<<"\n";
	
	for(int i = 0; i<n; i++)
	{
		if(a[i] == sk)
		{
			cout<<sk<<" found at index "<<i;
			flag = 1;
		}
	}


	if(flag == 0){
		cout<<"Value not found"
	}
	
}
