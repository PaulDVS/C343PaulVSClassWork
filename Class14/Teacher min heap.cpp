#include<iostream>
#define max 20
using namespace std;
int main()
{
	int a[max],i=0,j;
	a[0]=-1;
	i++;
	int ele,ch,pos;
	do
	{
		cout<<"\n 1 Insert 2 delete 3display 4 exit \n Enter choice = ";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"\nEnter the ele = ";
			       cin>>ele;
			       a[i++]=ele;
			       j=i-1;
			       while(j/2>0 && a[j]<a[j/2])
			       {			       	
			       		swap(a[j],a[j/2]);			       	
			       		j=j/2;
				   }			       		      
			       break;
			case 2: cout<<"\nEnter the ele = ";
			        cin>>pos;
			        if(pos<1 || pos>i-1)
			        	cout<<"\n Invalid pos";
			        else
			        {
			        	a[pos] = a[i-1];
			        	i--;
			        	int leftchild,rightchild;
			        	while( 2*pos<i  )
			        	{
			        		leftchild = 2*pos;
			        		rightchild = 2*pos+1;
			        		//pos=2   child 2*2   2*2+1 min(a[4] a[5]) swap a[pos]
			        		if(a[pos]<a[leftchild] && a[pos]<a[rightchild])
			        			break;
			        		if( a[leftchild] < a[rightchild]  )
			        		{
			        			swap(a[leftchild] , a[pos]);
			        			pos = leftchild;
							}
			        		else if( rightchild<i && a[leftchild] > a[rightchild]  )
			        		{
			        			swap(a[rightchild] , a[pos]);
			        			pos = rightchild;
							}			        			
						}
					}
			case 3:for(j=1;j<i;j++)
					cout<<a[j]<<"\t";
					break;
			case 4:break;
		}
	}while(ch!=4);
}
