#include<iostream>
#include<iomanip>
#include<string>

using namespace std;


struct Product
{
	int PID;
	string PNAME;
	double PRICE;
	string CATEGORY;
};

struct Node
{
	struct Product *data;
	struct Node *next;
};


void push_back(Product *newProduct);
Product* pop_back();
void displayProduct(int pos);
void printProduct(Product *product);
void displayAll();
void calculatePrice();
void arrangeProducts();



Node *head;
int cnt;

int main()
{
	head = NULL;
	cnt =0;
	int ch,pos;
	Product *tempProduct;
	do
	{
		cout<<"\n1 Create new Product";
		cout<<"\n2 Remove oldest Product";
		cout<<"\n3 Display Product";
		cout<<"\n4 Calculate total price";
		cout<<"\n5 Arrange Products";
		cout<<"\n6 Display All";
		cout<<"\n9 Exit";
		cout<<"\n Enter choice = ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				tempProduct = new Product();
				cout<<"\n Enter the PID = ";
				cin>>tempProduct -> PID;
				cout<<"\n Enter the Product name = ";
				cin>>tempProduct -> PNAME;
				cout<<"\n Enter the price = ";
				cin>>tempProduct -> PRICE;
				cout<<"\n Enter the category = ";
				cin>>tempProduct -> CATEGORY;
				push_back(tempProduct);
			    break;
			    
			case 2:
				tempProduct = pop_back();
				if(tempProduct !=NULL){
					cout<<"Product :"<<tempProduct->PNAME<<" deleted"<<endl;
				}
				else{
					cout<<"Error Product list is empty"<<endl;
				}
			    break;
			    
			case 3:
				cout<<"\n Enter the position of the Product to view = ";
				cin>>pos;
				displayProduct(pos);
			    break;
			    
			case 4:
				calculatePrice();
			    break;
			    
			case 5:
				arrangeProducts();
			    break;
			    
			case 6:
				displayAll();
			    break;
			    
			case 9:break;
			default:cout<<"\n Invalid choice \n";    
			    
			
		}
	}while(ch!=9);
}

void push_back(Product *newProduct)
{
	Node *temp = new Node();
	temp->data = newProduct;
	temp->next = head;
	head = temp;
	cnt++;	
}

Product* pop_back()
{
	Node *tempNode;
	Product *tempProduct;	
		
	if(head == NULL)
	{
		return NULL;
		
	}
	else if(cnt == 1)
	{
		tempNode = head;
		head = NULL;
		tempProduct = tempNode->next->data;
		cnt--;
		return tempProduct;
	}
	else{
		tempNode = head;
		for(int i=2; i<cnt;i++){
			tempNode = tempNode->next;
		}
		tempProduct = tempNode->next->data;
		tempNode->next = NULL;
		cnt--;
		return tempProduct;
	}

}

void displayProduct(int pos)
{
	Node *tempNode;
	
	if(head == NULL)
	{
		cout<<"Product list is empty"<<endl;
	}
	else if(pos<1 || pos > cnt)
	{
		cout<<"Error, incorrect position"<<endl;
	}
	else{
		tempNode = head;
		for(int i=1; i<pos;i++){
			tempNode = tempNode->next;
		}
		printProduct(tempNode->data);
	}
	
}

void printProduct(Product *product)
{
	cout<<endl;
	cout<<"Product ID: "<<product->PID<<endl;
	cout<<"Product Name: "<<product->PNAME<<endl;
	cout<<fixed<<setprecision(2)<<"Product Price: $"<<product->PRICE<<endl;
	cout<<"Product Category: "<<product->CATEGORY<<endl;
	cout<<endl;
}

void displayAll()
{
	Node *tempNode = head;
	printProduct(tempNode->data);

	for(int i = 1; i<cnt; i++){
		tempNode = tempNode->next;
		printProduct(tempNode->data);
	}
}

void calculatePrice()
{
	double totalPrice = 0;
	
	Node *tempNode = head;
	totalPrice += tempNode->data->PRICE;

	for(int i = 1; i<cnt; i++){
		tempNode = tempNode->next;
		totalPrice += tempNode->data->PRICE;
	}
	cout<<fixed<<setprecision(2)<<"Total Price: $"<<totalPrice<<endl;
}

void arrangeProducts()
{
	Node *startNode;
	Node *minNode;
	Node *endNode;
	
	Product *tempProduct;
	
	if(head == NULL){
		cout<<"Products list is empty, nothing to sort"<<endl;
	}
	else if (cnt == 1){
		cout<<"Products list contains 1 product, nothing to sort"<<endl;
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
				if(minNode->data->CATEGORY < startNode->data->CATEGORY){
					tempProduct = minNode->data;
					minNode->data = startNode->data;
					startNode->data = tempProduct;
				}
				minNode = minNode->next;
			}
			startNode = startNode->next;
		}
		
		
		cout<<"Products were sorted by category"<<endl;
		displayAll();
	}
}




