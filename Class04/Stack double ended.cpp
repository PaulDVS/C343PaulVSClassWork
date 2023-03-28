#include<iostream>
#define max 5
using namespace std;

void push();
void pop();
void display();

int a[max];
int top=-1;
int bottom = max;

int main()
{
	int ch;
	do
	{
		cout<<"\n 1 PUSH 2 POP 3 DISPLAY 4 EXIT\n Enter choice = ";
		cin>>ch;
		switch(ch)
		{
			case 1: push();break;
			case 2: pop();break;
			case 3: display();break;
			case 4: break;
		}
	}while(ch!=4);
}

void push()
{
	int ch;
	cout<<"\n Push from: 1:Top. 2:Bottom= ";
	cin>>ch;
	
	switch(ch)
		{
			case 1: 
				if(top==bottom-1)
					cout<<"\n Stack overflow \n";
				else
				{
					int ele;
					cout<<"\n enter the ele = ";
					cin>>ele;
					a[--bottom]=ele;
				}
				break;
				
			case 2: 
				if(top==bottom-1)
					cout<<"\n Stack overflow \n";
				else
				{
					int ele;
					cout<<"\n enter the ele = ";
					cin>>ele;
					a[++top]=ele;
				}
				break;
			default: break;
		}
		
	
}

void pop()
{
	
	int ch;
	cout<<"\n Pop from: 1:Top. 2:Bottom= ";
	cin>>ch;
	
	switch(ch)
		{
			case 1: 
				if(bottom>max)
					cout<<"\n Stack underflow \n";
				else
				{
					cout<<"\n Deleting  = "<<a[bottom++]<<endl;
				}
				break;
				
			case 2: 
				if(top==-1)
					cout<<"\n Stack underflow \n";
				else
				{
					cout<<"\n Deleting  = "<<a[top--]<<endl;
				}
				break;
			default: break;
		}
		
	
}

void display()
{
	if(top==-1 && bottom>max)
		cout<<"\n Stack underflow \n";
	else
	{
		cout<<"\n Stack elements \n";
		for(int i=max-1;i>=bottom;i--)
			cout<<a[i]<<endl;	
		for(int i=bottom-1;i>top;i--)
			cout<<"Empty"<<endl;
		for(int i=top;i>=0;i--)
			cout<<a[i]<<endl;	
	}
}


