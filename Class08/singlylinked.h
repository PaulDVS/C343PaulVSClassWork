#include<iostream>
using namespace std;


struct Node
{
	int data;
	struct Node *next;
};

Node *head;
int cnt;

void insertBegin(int ele)
{
	Node *temp = new Node();
	temp->data = ele;
	temp->next = NULL;
	temp->next = head;
	head = temp;
	cnt++;	
}

void insertEnd(int ele)
{
	Node *temp = new Node();
	temp->data = ele;
	temp->next = NULL;
	
	Node *p;
	
	if(head != NULL){
		p = head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next = temp;
	}
	else{
		head = temp;	
	}
	cnt++;	
}

void insertAtPos(int ele, int pos)
{
	Node *temp = new Node();
	temp->data = ele;
	temp->next = NULL;
	
	Node *p = head;
	for(int i = 0; i<pos-2; i++){
		p=p->next;
	}
	temp->next = p->next;
	p->next = temp;
	cnt++;
}


void deleteBegin(){
	head= head -> next;
	cnt--;
}

void deleteEnd(){
	if(cnt == 1)
		head = NULL;
	else
	{
		Node *p = head;
		for(int i = 2; i<cnt; i++){
			p=p->next;
		}
		p->next = NULL;
	}
	
	cnt--;
}

void deleteAtPos(int pos)
{
	Node *p = head;
	Node *j;
	for(int i = 2; i<pos; i++){
		p=p->next;
	}
	j = p->next;
	if(j->next == NULL){
		p->next = NULL;
	}
	else{
		p->next = j->next;
	}
	cnt--;
}

void display()
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


Node* at(int pos)
{
	Node *returnNode;
	
	if(head == NULL || pos >cnt)
	{
		return NULL;
	}
	else
	{
		returnNode = head; 
		for(int i = 1; i<pos; i++){
			returnNode=returnNode->next;
		}
		return returnNode;
	}
}

Node* max()
{
	Node *returnNode;
	
	if(head == NULL)
	{
		return NULL;
	}
	else
	{
		returnNode = head;
		for(Node *p=head;p!=NULL;p=p->next)
		{
			if(returnNode->data < p->data){
				returnNode = p;
			}
		}
		return returnNode;
	}
}

Node* min()
{
	Node *returnNode;
	
	if(head == NULL)
	{
		return NULL;
	}
	else
	{
		returnNode = head;
		for(Node *p=head;p!=NULL;p=p->next)
		{
			if(returnNode->data > p->data){
				returnNode = p;
			}
		}
		return returnNode;
	}
}

void swapAlternate()
{	
	Node *i;
	Node *p;
	Node *j;
	
	if(head != NULL || cnt>1)
	{
		p = head;
		j = p -> next;
		
		p -> next = j -> next;
		j -> next = p;
		head = j;
		
		
		for(i = p; i->next!=NULL && i->next->next!=NULL; i=p)
		{
			p = i -> next;
			j = p -> next;
		
			p -> next = j -> next;
			j -> next = p;
			i->next = j;
		}
	}
}

void sortFrom(int posStart, int posEnd)
{
	Node *beforeNode;
	Node *startNode;
	Node *endNode;
	Node *afterNode;
	
	Node *temp1;
	
	

	if(head=NULL){
		cout<<"Cannot sort an empty linked List"<<endl;
	}
	else if(cnt == 1){
		cout<<"Linked list is too short to sort"<<endl;
	}
	else if(posStart <1 || (posEnd - posStart) < 1  || posStart>cnt || posEnd > cnt){
		cout<<"Invalid Values"<<endl;
	}
	else{	
		

	}
}



