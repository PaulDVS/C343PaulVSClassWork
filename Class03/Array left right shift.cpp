#include<iostream>

using namespace std;

int main()
{
	int n, shift, rotation;
	
	cout<<"Enter the size of the array: \n";
	cin>>n;
	cout<<"\n";
	
	int a[n];
	int temp[n];
	
	cout<<"Enter the element: \n";
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"\n";
	
	cout<<"Please enter the rotation direction: \n";
	cout<<"1 for Left \n";
	cout<<"2 for Right \n";
	cin>>rotation;
	cout<<"\n";
	
	cout<<"Please enter the shift size: \n";
	cin>>shift;
	cout<<"\n";
	
	for(int i = 0; i < shift; i++){
		if(rotation == 1){
			for(int j = 0; j<n-1; j++)
			{
				temp[j] = a[j+1];
			}
			temp[n-1] = a[0];
		}
		else if(rotation == 2)
		{
			for(int j = 1; j<n; j++)
			{
				temp[j] = a[j-1];
			}
			temp[0] = a[n-1];
		}
		else
		{
			cout<<"Error, invalid ";
		}
		
		for(int x = 0; x<n ; x++)
		{
			a[x] = temp[x];
		}
	}
	
	cout<<"The new array: \n";
	for(int i = 0; i < n; i++){
		cout<<(a[i])<<" ";
	}
}
