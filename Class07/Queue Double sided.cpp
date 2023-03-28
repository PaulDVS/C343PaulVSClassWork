#include<iostream>
#define max 8
using namespace std;

void enqueue();
void dequeue();
void display();

int a[max],f1,r1,f2,r2;

int main()
{
	f1 = 0, r1 = -1;
	f2 = max-1, r2 = max;
	int ch;
	do
	{
		cout<<"\n 1 ENQUEUE 2 DEQUEUE 3 DISPLAY 4 EXIT \n Enter choice=";
		cin>>ch;
		switch(ch)
		{
			case 1: enqueue();break;
			case 2: dequeue();break;
			case 3: display();break;
			case 4: break;
			default:cout<<"\n Invalid choice \n";
		}
	}while(ch!=4);
}

void enqueue()
{
	if(r1 == r2-1)
		cout<<"\n Queue overflow " <<endl;
	else
	{
		int ele;
		int side;

		do
		{
			cout<<"\n Enter the side to add to 1:Left, 2:Right 3:Exit \n Enter choice=";
			cin>>side;
			switch(side)
			{
				case 1: 
					cout<<"\n Enter the ele = ";
					cin>>ele;
					a[++r1] = ele;
					side =3;
					break;
				case 2: 
					cout<<"\n Enter the ele = ";
					cin>>ele;
					a[--r2] = ele;
					side =3;
					break;
				case 3: break;
				default:cout<<"\n Invalid choice \n";
			}
		}while(side!=3);
	}	
}

void dequeue()
{
	int side;
	do
	{
		cout<<"\n Enter the side to remove to 1:Left, 2:Right 3:Exit \n Enter choice=";
		cin>>side;
		switch(side)
		{
			case 1: 
				if(f1>r1)
					cout<<"\n Queue underflow\n";
				else
				{
					cout<<"\n The element deleted = "<<a[f1]<<endl;
					f1++;
				}
				side =3;
				break;
			case 2: 
				if(f2<r2)
					cout<<"\n Queue underflow\n";
				else
				{
					cout<<"\n The element deleted = "<<a[f2]<<endl;
					f2--;
				}
				side =3;
				break;
			case 3: break;
			default:cout<<"\n Invalid choice \n";
		}
	}while(side!=3);
	
	
}

void display()
{
	if(f1>r1 && f2<r2)
		cout<<"\n Queue empty\n";
	else
	{
		cout<<"\n the elements of left queue = \n";
		for(int i=f1;i<=r1;i++)
			cout<<a[i]<<"\t";
			
		cout<<"\n the elements of right queue = \n";
		for(int i=f2;i>=r2;i--)
			cout<<a[i]<<"\t";	
			
	}
}
