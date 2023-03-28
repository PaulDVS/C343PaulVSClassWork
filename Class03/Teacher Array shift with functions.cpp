#include<iostream>
using namespace std;
void input(int a[],int n);
void output(int a[],int n);
int main()
{
	int n,sk,flag = 0,ch,rot,r,temp,i;
	int a[50];
	
	cout<<"\n Enter the num of elements = ";
	cin>>n;
	
	
	input(a,n);
	output(a,n);
	
	
	do
	{
		cout<<"\n Enter the choices 1 Left 2 Right 3 Exit= ";
		cin>>ch;
		if(ch==1 || ch==2)
		{
			cout<<"\n Enter the rotations = ";
			cin>>rot;
		}
		switch(ch)
		{
			case 1: for(r = 1 ;r<=rot ; r++)
					{
						temp = a[0];
						for(i=0;i<n-1;i++)
							a[i]=a[i+1];
							
						a[n-1]=temp;
					}
					output(a,n);
					break;
					
			case 2: for(r = 1 ;r<=rot ; r++)
					{
						temp = a[n-1];
						for(i=n-1;i>=1;i--)
							a[i]=a[i-1];
							
						a[0]=temp;
					}
					output(a,n);
					break;
			case 3:break;
			default:cout<<"\n Invalid choice\n";					
		}
	}while(ch!=3);
	
}void input(int a[],int n)
{
	cout<<"\n Enter the elements = ";
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void output(int a[],int n)
{
	cout<<"\n The elements = ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}
