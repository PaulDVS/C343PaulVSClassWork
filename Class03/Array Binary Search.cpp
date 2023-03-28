#include<iostream>
using namespace std;
void input(int a[],int n);
void output(int a[],int n);
void searchLess(int a[], int x, int sk);
void searchMore(int a[], int x, int sk);

int main()
{
	int n, flag;
	int sk;
	int low, high, mid;
	int a[50];
	
	cout<<"Enter the num of elements = \n";
	cin>>n;
	cout<<"\n";
	
	input(a,n);
	output(a,n);
	
	cout<<"Enter the key element = \n ";
	cin>>sk;
	cout<<"\n";
	
	low=0;
	high=n;
	mid=high/2;
	
	do
	{
		if(a[mid] == sk)
		{
			flag=1;
			searchLess(a, mid-1, sk);
			cout<<sk<<" found at index "<<mid;
			cout<<"\n";
			searchMore(a, mid+1, sk);
		}
		else if(a[mid] > sk)
		{
			high = mid-1;
			mid = (high+low)/2;
		}
		else if(a[mid] < sk)
		{
			low=mid+1;
			mid = (high+low)/2;
		}
		
	}while(flag == 0 && low<=high);
	
	if(flag==0)
	{
		cout<<sk<<" not found.";
	}

}
void input(int a[],int n)
{
	cout<<"Enter the elements = \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cout<<("\n");
	}
}
void output(int a[], int n)
{
	cout<<"The elements = \n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
		
	cout<<"\n";
	cout<<"\n";
}

void searchLess(int a[], int x, int searchKey)
{
	if(a[x]==searchKey){
		searchLess(a, x-1, searchKey);
		cout<<searchKey<<" found at index "<<x;
		cout<<"\n";
	}
}

void searchMore(int a[], int x, int searchKey)
{
	if(a[x]==searchKey){
		cout<<searchKey<<" found at index "<<x;
		cout<<"\n";
		searchMore(a, x+1, searchKey);
	}
}
