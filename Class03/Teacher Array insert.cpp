#include<iostream>
using namespace std;void output(int a[],int n);
int main()
{
	int n=0,pos,ele,i,j,ch;
	int a[20]={0};	
	
	do
	{
		cout<<"\n 1 Insert ele 2 Display 3 Exit \n";
		cin>>ch;
		switch(ch)
		{
			case 1: if(n==20)
						cout<<"\n Array overloaded";
					else
					{
						cout<<"\n Enter the element  = ";
				        cin>>ele;
				        do
				        {
				        	cout<<"\n Enter the position  = ";
				        	cin>>pos;
						}while(pos<1 || pos>n+1);
				       
				        for(i=n;i>=pos;i--)
							a[i]=a[i-1];
						a[pos-1]=ele;
						n++;
					}
			
					
					break;
			case 2:output(a,n);break;
			case 3:break;			       
		}
	}while(ch!=3);
}void output(int a[],int n)
{
	cout<<"\n The elements = ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}
