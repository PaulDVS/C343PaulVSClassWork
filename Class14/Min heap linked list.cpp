#include<iostream>
#include<cmath>

using namespace std;

struct minHeapNode{
	int value;
	minHeapNode *parent;
	minHeapNode *lchild;
	minHeapNode *rchild;
	
	void printVal(){
		cout<<value;
		
		if(lchild){
			cout<<"-->";
			lchild->printVal();
			if(rchild){
				cout<<"*-->";
				rchild->printVal();
			}
		}
		else{
			cout<<"|";
		}
		
	}
		
};

minHeapNode *head;

int main()
{
	minHeapNode *temp;
	minHeapNode *current;
	int depth = 0;
	int width = 0;
	int tempDepth;
	int tempWidth;
	int i;
	int tempVal, calc;
	int ele,ch,pos;
	do
	{
		cout<<"\n 1 Insert 2 delete 3 display 4 exit \n Enter choice = "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter the ele = ";
			    	cin>>ele;
			    	temp = new minHeapNode();
			    	temp->value = ele;
			    	temp->parent = NULL;
			    	temp->lchild = NULL;
			    	temp->rchild = NULL;
			    	
			    	//Set temp to end of list;
			    	i = 1;
			    	current = head;
			    	
			    	while(i<depth){
			    		if( width <= (pow(2, depth))/2 ){
			    			current = current->lchild;
						}
						else{
							current = current->rchild;
						}
						i++;
					}
					
			    	if(depth==0){
			    		head=temp;
			    		width = 1;
			    		depth = 1;
			    		break;
					}
			    	else if(width%2 == 1){
			    		current->lchild = temp;
			    		temp->parent = current;
					}
					else{
						current->rchild = temp;
						temp->parent = current;
					}
			    	
			    	width++;
			    	
			    	if(width > pow(2, depth)){
			    		width = 1;
			    		depth++;
					}
					
					
					//Loops back up list if smaller
					while(temp->parent != NULL){
						if(temp->value < temp->parent->value){
							tempVal = temp->value;
							temp->value = temp->parent->value;
							temp->parent->value = tempVal;
							
							temp = temp->parent;
						}
						else{
							break;
						}
					}
							       		      
			       break;
			       
			case 2: 
				cout<<"Enter the position to delete = "<<endl;
			    cin>>pos;
			    
			    //Check pos is valid
			    if(pos<1 || pos >= pow(2, depth) ){
			    	cout<<"Error, invalid position"<<endl;
			    	break;
				}
			    
			    
			    i=1;
			    current = head;
			    tempWidth = width-1;
			    tempDepth = depth;
			    if(tempWidth == 0){
			    	tempDepth--;
			    	tempWidth = pow(2, tempDepth);
				}
			    
			    //Get last item
			    while(i<tempDepth){
		    		if( tempWidth <= (pow(2, tempDepth))/2 ){
		    			current = current->lchild;
					}
					else{
						current = current->rchild;
					}
					i++;
				}
				
				if(tempWidth%2 == 1){
		    		tempVal = current->lchild->value;
		    		current->lchild = NULL;
				}
				else{
					tempVal = current->rchild->value;
		    		current->rchild = NULL;
				}
				
				//Find pos to delete;
		    	i = 1;
		    	current = head;
		    	
		    	calc = static_cast<int>(sqrt(pos)); //Required to figure out where along the tree tbe pos is.
		    	
		    	while( pow(2, i) < pos){
		    		
		    		if( (pos+1)-pow(2, calc) <= (pow(2, calc))/2 ){
		    			current = current->lchild;
					}
					else{
						current = current->rchild;
					}
					i++;
				}
				
				if( static_cast<int>((pos+1)-pow(2, calc)) %2 == 1){
		    		current = current->lchild;
				}
				else{
					current = current->rchild;
				}
				
				current->value = tempVal;
				
				width--;
				if(width == 0){
			    	depth--;
			    	width = pow(2, depth);
				}
				
				//Loop through min head swapping valeu towards botom if smaller
				while(i<=depth){
					if(current->rchild !=NULL && (current->rchild->value < current->lchild->value) ){
						if(current->value < current->rchild->value){
							swap(current->value, current->rchild->value);
							current = current->rchild;
						}
						else{
							break;
						}
					}
					else
					{
						if(current->lchild !=NULL  && (current->value < current->lchild->value)){
							swap(current->value, current->lchild->value);
							current = current->lchild;
						}
						else{
							break;
						}
					}
					cout<<i<<endl;
					i++;
				}
				break;
					
			case 3:
				head->printVal();
				break;
					
			case 4:break;
		}
	}while(ch!=4);
}
