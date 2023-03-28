#include<iostream>

using namespace std;

struct Node
{
	int value;
	struct Node *left;
	struct Node *right;
};

void createNode(Node *input, Node *currentNode){
	
	if(input->value < currentNode->value){
		if(currentNode->left==NULL){
			currentNode->left = input;
		}
		else{
			createNode(input, currentNode->left);
		}
	}
	else if(input->value > currentNode->value){
		if(currentNode->right==NULL){
			currentNode->right = input;
		}
		else{
			createNode(input, currentNode->right);
		}
	}
	
}

void printNodeInOrder(Node *currentNode){
	if(currentNode->left!=NULL){
		printNodeInOrder(currentNode->left);
	}
	cout<<currentNode->value<<" ";
	if(currentNode->right!=NULL){
		printNodeInOrder(currentNode->right);
	}
}

void printNodePreOrder(Node *currentNode){
	cout<<currentNode->value<<" ";
	if(currentNode->left!=NULL){
		printNodePreOrder(currentNode->left);
	}
	if(currentNode->right!=NULL){
		printNodePreOrder(currentNode->right);
	}
}

void printNodePostOrder(Node *currentNode){
	if(currentNode->left!=NULL){
		printNodePostOrder(currentNode->left);
	}
	if(currentNode->right!=NULL){
		printNodePostOrder(currentNode->right);
	}
	cout<<currentNode->value<<" ";
}

int findMinimum(Node *curr){
	if(curr->left!=NULL){
		return findMinimum(curr->left);
	}
	else{
		return curr->value;
	}
}


Node* deleteNode(Node *curr, int target){
	if(curr->value ==target){
		if(curr->left ==NULL && curr->right==NULL){
			return NULL;
		}
		else if(curr->left == NULL && curr->right!=NULL){
			return curr->right;
		}
		else if(curr->right == NULL && curr->left!=NULL){
			return curr->left;
		}
		else{
			int minimum = findMinimum(curr->right);
			curr->value = minimum;
			curr->right = deleteNode(curr->right, minimum);
		}
	}
	else if(curr->value > target){
		curr->left = deleteNode(curr->left, target);
	}
	else if(curr->value < target){
		curr->right = deleteNode(curr->right, target);
	}
}

Node *headNode = NULL;

int main()
{
	int size;
	int input;
	Node *temp;
	
	cout<<"Input the amount of nodes to create"<<endl;
	cin>> size;
	for(int i = 0; i<size; i++){
		cout<<"Please enter the value for "<<i+1<<": "<<endl;
		cin>>input;
		
		temp = new Node();
		temp->left=NULL;
		temp->right=NULL;
		temp->value=input;
		
		if(headNode == NULL){
			headNode=temp;
		}
		else{
			createNode(temp, headNode);
		}
		
	}
	
	cout<<endl;
	
	cout<<"Binary tree in-order: ";
	printNodeInOrder(headNode);
	cout<<endl;
	
	cout<<"Binary tree pre-order: ";
	printNodePreOrder(headNode);
	cout<<endl;
	
	cout<<"Binary tree post-order: ";
	printNodePostOrder(headNode);
	cout<<endl;
	
	
	cout<<"Enter the node to delete ";
	cout<<endl;
	cin>>input;
	
	headNode = deleteNode(headNode, input);
	
	cout<<"Binary tree in-order: ";
	printNodeInOrder(headNode);
	cout<<endl;
	
	cout<<"Binary tree pre-order: ";
	printNodePreOrder(headNode);
	cout<<endl;
	
	cout<<"Binary tree post-order: ";
	printNodePostOrder(headNode);
	cout<<endl;
}
