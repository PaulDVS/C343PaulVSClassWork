#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

void insertStart(int data);
void insertEnd(int data);
void insertAt(int data, int pos);
void deleteStart();
void deleteEnd();
void deleteAt(int pos);
void displayNode(int pos);
void displayAll();
void displayAllRev();
void max();
void min();
void sort();

Node *head;
int cnt;


int main()
{
	head = NULL;
	cnt =0;
	int ch, pos, data;
	
	do
	{
		cout<<"\n1 insertStart";
		cout<<"\n2 insertEnd";
		cout<<"\n3 insertAt";
		cout<<"\n4 deleteStart";
		cout<<"\n5 deleteEnd";
		cout<<"\n6 deleteAtPos";
		cout<<"\n7 DisplayAt";
		cout<<"\n8 DisplayAll";
		cout<<"\n9 DisplayAllReverse";
		cout<<"\n10 Max";
		cout<<"\n11 Min";
		cout<<"\n12 sort";
		cout<<"\n99 Exit";
		cout<<"\n Enter choice = ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n Enter the data = ";
				cin>>data;
				insertStart(data);
			    break;
			    
		   case 2:
				cout<<"\n Enter the data = ";
			    cin>>data;
				insertEnd(data);
		    	break;
		    	
			case 3:
				cout<<"\n Enter the position = ";
			    cin>>pos;
			    if(pos <= 0 || pos>cnt+1){
			    	cout<<"\n Error, no such position"; 
				}
				else{
					cout<<"\n Enter the data = ";
				    cin>>data;
				    if(pos == 1){
				    	insertStart(data);
					}
					else if(pos == cnt+1){
						insertEnd(data);
					}
				    else{
				    	insertAt(data,pos);
					} 
				}  
				break;
				
			case 4:
				deleteStart();
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
				    	deleteStart();
					}
					else if(pos == cnt){
						deleteEnd();
					}
				    else{
				    	deleteAt(pos);
					}
				}
			    break;
			    
			case 7:
				cout<<"\n Enter the position = ";
			    cin>>pos;
			    if(pos <= 0 || pos>cnt){
			    	cout<<"\n Error, no such position"; 
				}
				else{
				    displayNode(pos);
				}
			    break;
			    
			case 8: displayAll(); break;
				
			case 9: displayAllRev(); break;
				
			case 10: max(); break;
				
			case 11: min(); break;
				
			case 12: sort(); break;
				
			    
			case 99:break;
			default:cout<<"\n Invalid choice \n";
		}
	}while(ch!=99);
}

void insertStart(int data)
{

	Node *temp = new Node();
	temp->data = data;
	temp->next = head;
	temp->prev = NULL;
	
	if(head != NULL){
		head->prev = temp;
	}
	
	head = temp;
	cnt++;
}

void insertEnd(int data)
{
	Node *temp = new Node();
	temp->data = data;
	temp->next = NULL;
	Node *p;
	
	if(head != NULL){
		p = head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next = temp;
		temp->prev = p;
	}
	else{
		head = temp;
		temp->prev = NULL;	
	}
	cnt++;
}

void insertAt(int data, int pos)
{
	Node *temp = new Node();
	temp->data = data;
	
	Node *p = head;
	for(int i = 1; i<pos-1; i++){
		p=p->next;
	}
	temp->next = p->next;
	p->next->prev = temp;
	temp->prev = p;
	p->next = temp;
	
	cnt++;
}

void deleteStart()
{
	if(head == NULL){
		cout<<"Linked list is empty, cant delete";
	}
	else if(head->next ==NULL)
	{
		head = NULL;
		cnt--;
	}
	else{
		head->next->prev = NULL;
		head = head->next;
		cnt--;
	}
}

void deleteEnd()
{
	if(head == NULL)
	{
		cout<<"Linked list is empty, cant delete";
		
	}
	else if(cnt == 1)
	{
		head = NULL;
		cnt--;
	}
	else{
		Node *p = head;
		for(int i = 2; i<cnt; i++){
			p=p->next;
		}
		p->next = NULL;
		cnt--;
	}
}

void deleteAt(int pos)
{
	Node *p = head;
	for(int i = 2; i<=pos; i++){
		p=p->next;
	}

	if(p->next == NULL){
		p->prev->next = NULL;
	}
	else{
		p->next->prev = p->prev;
		p->prev->next = p->next;
	}
	cnt--;
}


void displayNode(int pos)
{
	Node *p = head;
	for(int i = 2; i<=pos; i++){
		p=p->next;
	}
	
	cout<<"-->"<<p->data<<endl;
}

void displayAll()
{
	if(head == NULL)
		cout<<"\n No elements in list \n";
	else
	{
		cout<<"\n List ele = \n";
		for(Node *p=head;p!=NULL;p=p->next)
		{
			cout<<p->data<<"-->";
		}
	}
}

void displayAllRev()
{
	Node *p;
	if(head == NULL)
		cout<<"\n No elements in list \n";
	else
	{
		cout<<"\n List ele = \n";
		for(p=head;p->next!=NULL;p=p->next);
		for(;p!=NULL;p=p->prev)
		{
			cout<<p->data<<"-->";
		}
	}
}

void max()
{
	int max;
	if(head == NULL)
	{
		cout<<"\n No elements in list \n";
	}
	else
	{
		max = head->data;
		for(Node *p=head;p!=NULL;p=p->next)
		{
			if(max < p->data){
				max = p->data;
			}
		}
		cout<<"\n Max is "<<max<<endl;
	}
}

void min()
{
	int min;
	if(head == NULL)
	{
		cout<<"\n No elements in list \n";
	}
	else
	{
		min = head->data;
		for(Node *p=head;p!=NULL;p=p->next)
		{
			if(min > p->data){
				min = p->data;
			}
		}
		cout<<"\n Min is "<<min<<endl;
	}
}

void sort()
{
	Node *startNode;
	Node *minNode;
	Node *endNode;
	
	int tempData;
	
	if(head == NULL){
		cout<<"Linked list is empty, nothing to sort"<<endl;
	}
	else if (cnt == 1){
		cout<<"Linked list contains 1 node, nothing to sort"<<endl;
	}
	else{
		startNode = head;
		endNode = head;
		
		for(int i=1; i<cnt; i++){
			endNode = endNode->next;
		}
		
		while(startNode!=endNode){
			minNode = startNode;

			while(minNode!=endNode->next){
				if(minNode->data < startNode->data){
					tempData = minNode->data;
					minNode->data = startNode->data;
					startNode->data = tempData;
				}
				minNode = minNode->next;
			}
			startNode = startNode->next;
		}
		
		
		cout<<"Linked list has been sorted"<<endl;
		displayAll();
	}
}



