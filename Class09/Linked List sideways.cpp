#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct sidewaysNode
{
	int data;
	struct sidewaysNode *next;
};

struct mainNode
{
	int data;
	struct sidewaysNode *next;
	struct mainNode *down;
};

void setup();
void insert(int data);
void displayAll();
void deleteNode(int data);

mainNode *head;


int main()
{
	int ch;
	int data;
	
	setup();
	
	do
	{
		cout<<"\n1 Create new Side Node";
		cout<<"\n2 Display All";
		cout<<"\n3 Delete by data";
		cout<<"\n9 Exit";
		cout<<"\n Enter choice = ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n Enter the Data of the new node = ";
				cin>>data;
				insert(data);
				break;
				
			case 2: displayAll(); break;	
			case 3:
				cout<<"\n Enter the Data of the node to delete = ";
				cin>>data;
				deleteNode(data);
				break;
			case 9:break;
			default:cout<<"\n Invalid choice \n";    
			    
			
		}
	}while(ch!=9);
}

void setup(){
	
	mainNode *tempNode;
	mainNode *lastNode = NULL;
	
	for(int i=3; i>=0; i--){
		tempNode= new mainNode();
		tempNode -> next = NULL;
		tempNode -> down = lastNode;
		tempNode -> data = i;
		lastNode = tempNode;
	}
	
	head = tempNode;
}


void insert(int data)
{
	
	mainNode *tempMain = head;
	sidewaysNode *tempSide;
	sidewaysNode *newNode = new sidewaysNode();
	
	newNode->next = NULL;
	newNode->data = data;
	
	for(int i = 0; i < data%4; i++){
		tempMain = tempMain->down;
	}
	
	if(tempMain->next == NULL){
		tempMain->next = newNode;
	}
	else{
		tempSide = tempMain->next;
		while(tempSide->next != NULL){
			tempSide =tempSide->next;
		}
		tempSide->next = newNode;
	}
}

void displayAll()
{
	mainNode *tempMain = head;
	sidewaysNode *tempSide;
	
	cout<<"Linked list: "<<endl;
	cout<<endl;
	
	for(int i =0; i<4; i ++){
		cout<<tempMain->data;
		if(tempMain->next != NULL){
			tempSide = tempMain->next;
			while(tempSide != NULL){
				cout<<" -->"<<tempSide->data;
				tempSide = tempSide->next;
			}
		}
		if(tempMain->down != NULL){
			cout<<endl;
			cout<<"|"<<endl;
			cout<<"|"<<endl;
			tempMain = tempMain->down;
		}
	}
}

void deleteNode(int data)
{
	mainNode *tempMain = head;
	sidewaysNode *tempSide;
	int deleteCheck = 0;
	
	for(int i = 0; i < data%4; i++){
		tempMain = tempMain->down;
	}
	
	
	if(tempMain->next == NULL)
	{
		cout<<"Node doesn't exist"<<endl;
	}
	else
	{
		while(tempMain->next != NULL && tempMain->next->data == data)
		{
			tempMain->next = tempMain->next->next;
			cout<<"Deleted: "<<data<<endl;
			deleteCheck = 1;
		}
		tempSide = tempMain->next;
		
		while(tempSide!= NULL){
			if(tempSide->next != NULL && tempSide->next->data == data){
				tempSide->next = tempSide->next->next;
				cout<<"Deleted: "<<data<<endl;
				deleteCheck = 1;
			}
			else{
				tempSide = tempSide->next;
			}
		}
		
		if(deleteCheck == 0){
			cout<<"Node not found"<<endl;
		}
	}
	
}





