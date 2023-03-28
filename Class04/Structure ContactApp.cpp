#include<iostream>
#include<string.h>
using namespace std;

struct Contact
{
	int id;
	char name[20];
	char emailId[20];
};

void insertContact(Contact contactList[], int *size, int *maxID);
void updateContact(Contact contactList[], int size);
void deleteContact(Contact contactList[], int *size);
int searchByID(Contact contactList[], int size, int id);
void displayContact(Contact contactList[], int size, int id);
int searchByName(Contact contactList[], int size, char name[]);
void displayContactByName(Contact contactList[], int size, char name[]);

int main()
{
	int choice;
	int id = 0;
	char searchName[20];
	
	Contact contactList[100];
	int size = 0;
	int maxID = 0;
	
	do
	{
		cout<<"Contact App main menu"<<endl;
		cout<<"1 Create new Contact, 2 Update Contact, 3 Delete Contact"<<endl;
		cout<<"4 Display Contact By ID, 5 Display Contact By Name, 6 Display all Contacts"<<endl;
		cout<<"9 Exit"<<endl;
		cout<<"Please enter your choice: "<<endl;
		cin>> choice;
		cout<<"\n";
		
		switch(choice)
		{
			case 1:
				insertContact(contactList, &size, &maxID);
				break;
				
			case 2:
				updateContact(contactList, size);
				break;
				
			case 3:
				deleteContact(contactList, &size);
				break;
				
			case 4:
				cout<<"Please enter the id of the contact to display: "<<endl;
				cin>> id;
				cout<<"\n";

				displayContact(contactList, size, id);
				break;
				
			case 5:
				memset(searchName, 0, 20);
				cout <<"Please enter the name of the contact: "<<endl;
				cin >> searchName;
				cout <<"\n";

				displayContactByName(contactList, size, searchName);
				break;
				
			case 6:
				cout<<"Displaying all contacts: "<<endl;
				cout<<"\n";
				
				for(int i=0; i<size; i++)
				{
					
					displayContact(contactList, size, contactList[i].id);
				}
				
				break;
				
			case 9:break;
				
			default:
				cout<<"\n Invalid choice \n";
				break;
		}
	}
	while(choice !=9);
}

void insertContact(Contact contactList[], int *size, int *maxID)
{
	Contact newContact;
	
	newContact.id = *maxID+1;
	
	cout<<"Please enter the name of the contact: "<<endl;
	cin>> newContact.name;
	cout<<"\n";
	
	cout<<"Please enter the email ID of the contact: "<<endl;
	cin>> newContact.emailId;
	cout<<"\n";
	
	contactList[*size] = newContact;
	*size += 1;
	*maxID += 1;
	
}

void updateContact(Contact contactList[], int size)
{
	Contact updateContact;
	int id=0;
	int i;
	
	cout<<"Please enter the id of the contact to update: "<<endl;
	cin>> id;
	cout<<"\n";
	
	i = searchByID(contactList, size, id);
	updateContact = contactList[i];
	
	cout<<"Please enter the new name of the contact: "<<endl;
	cin>> updateContact.name;
	cout<<"\n";
	
	cout<<"Please enter the new email ID of the contact: "<<endl;
	cin>> updateContact.emailId;
	cout<<"\n";
	
	contactList[i] = updateContact;
}

void deleteContact(Contact contactList[], int *size)
{
	Contact updateContact;
	int id=0;
	int i;
	
	cout<<"Please enter the id of the contact to Delete: "<<endl;
	cin>> id;
	cout<<"\n";
	
	i = searchByID(contactList, *size, id);
	
	for(int j = i; j < *size-1; j++){
		contactList[j] = contactList[j+1];
	}
	
	*size -= 1;
}

int searchByID(Contact contactList[], int size, int id)
{
	for(int i = 0; i<size;i++)
	{
		if(contactList[i].id == id)
		{
			return i;
		}
	}
	
	return -1;
}

void displayContact(Contact contactList[], int size, int id)
{
	Contact displayContact;
	int i;
	i = searchByID(contactList, size, id);
	displayContact = contactList[i];
	
	if(i>=0){
		cout<<"\n";
		cout<<"Contact ID: "<<displayContact.id<<endl;
		cout<<"Contact Name: "<<displayContact.name<<endl;
		cout<<"Contact Email ID: "<<displayContact.emailId<<endl;
	}
	else
	{
		cout<<"Error, ID: "<<id<<" not found"<<endl;
	}
	cout<<"\n";
}

int searchByName(Contact contactList[], int size, char name[])
{
	for(int i = 0; i<size;i++)
	{
		if(strcmp(name, contactList[i].name) == 0)
		
		{
			return i;
		}
	}
	
	return -1;
}

void displayContactByName(Contact contactList[], int size, char name[])
{
	Contact displayContact;
	int i;
	i = searchByName(contactList, size, name);
	displayContact = contactList[i];
	
	if(i>=0){
		cout<<"\n";
		cout<<"Contact ID: "<<displayContact.id<<endl;
		cout<<"Contact Name: "<<displayContact.name<<endl;
		cout<<"Contact Email ID: "<<displayContact.emailId<<endl;
	}
	else
	{
		cout<<"Error, Name: "<<name<<" not found"<<endl;
	}
	cout<<"\n";
}


