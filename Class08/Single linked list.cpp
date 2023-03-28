#include<iostream>
#include "singlylinked.h"

int main()
{
	head = NULL;
	cnt =0;
	int ch,ele,pos;
	do
	{
		cout<<"\n1 insertBegin";
		cout<<"\n2 insertEnd";
		cout<<"\n3 insertAtPos";
		cout<<"\n4 deleteBegin";
		cout<<"\n5 deleteEnd";
		cout<<"\n6 deleteAtPos";
		cout<<"\n7 Display";
		cout<<"\n12 swapAlternate";
		cout<<"\n13 sortFrom";
		cout<<"\n99 Exit";
		cout<<"\n Enter choice = ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				    cout<<"\n Enter the ele = ";
				    cin>>ele;
					insertBegin(ele);
			    	break;
		   case 2:
				cout<<"\n Enter the ele = ";
			    cin>>ele;
				insertEnd(ele);
		    	break;    
			case 3:
				cout<<"\n Enter the position = ";
			    cin>>pos;
			    if(pos <= 0 || pos>cnt+1){
			    	cout<<"\n Error, no such position"; 
				}
				else{
					cout<<"\n Enter the ele = ";
				    cin>>ele;
				    if(pos == 1){
				    	insertBegin(ele);
					}
					else if(pos == cnt+1){
						insertEnd(ele);
					}
				    else{
				    	insertAtPos(ele,pos);
					} 
				}  
				break;
			case 4:
				deleteBegin();
				cout<<"\n Begining Deleted ";
		    	break;  
			case 5:
				deleteEnd();
				cout<<"\n End Deleted ";
		    	break; 	
		    case 6:
				cout<<"\n Enter the position = ";
			    cin>>pos;
			    if(pos <= 0 || pos>cnt){
			    	cout<<"\n Error, no such position"; 
				}
				else{
				    if(pos == 1){
				    	deleteBegin();
					}
					else if(pos == cnt){
						deleteEnd();
					}
				    else{
				    	deleteAtPos(pos);
					}
				}
			    break; 
		    
			case 7:display();break;
			case 12: 
				swapAlternate();
				break;
			case 13: 
				int startSort, endSort;
				cout<<"\n Enter the Start pos = ";
			    cin>>startSort;
			    cout<<"\n Enter the End pos = ";
			    cin>>endSort;
				sortFrom(startSort, endSort);
				break;	
			
			case 99:break;
			default:cout<<"\n Invalid choice \n";
		}
	}while(ch!=99);
	
}
