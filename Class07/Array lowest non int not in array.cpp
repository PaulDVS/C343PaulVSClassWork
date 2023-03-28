#include<iostream>

using namespace std;

int main(){
	int input[99];
	int top = 0;
	int temp;
	int change=1;
	
	cout<<"Please enter the numbers to add to the array, enter any letter to end"
	while(cin >>temp){

		input[top++] = temp;
	}
	temp = 1;
	
	while(change == 1){
		change = 0;
		for(int i=0; i<top; i++){
			if(input[i] == temp){
				temp += 1;
				change = 1;
			}
		}
	}
	
	cout<<"Output: "<<temp<<endl;
	
}
