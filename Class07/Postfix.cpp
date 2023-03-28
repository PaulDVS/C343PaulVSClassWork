#include<iostream>
#include<string>
#define max 99
using namespace std;

int orderTranslate(char input);

int main()
{
	string exp;
	exp = "a+b*(c^d-e)^(f+g*h)-i";
	//exp = "a+b*8+7";
	
	char charStack[99];
	string postfix = "";
	int top=-1;

	
	
	for(int i = 0; i<exp.size(); i++){
		if(isalpha(exp.at(i)) || isdigit(exp.at(i)) ){
			postfix += exp.at(i);
		}
		else if((top == -1) || (charStack[top] == '(') ){
			charStack[++top] = exp.at(i);
		}
		else if(exp.at(i) == '('){
			charStack[++top] = exp.at(i);
		}
		else if(exp.at(i) == ')'){
			while((charStack[top] != '(') && (top >= 0)){
				postfix += charStack[top--];
			}
			if(charStack[top] == '('){
				top--;
			}
		}
		else if(orderTranslate(exp.at(i)) <= orderTranslate(charStack[top]) ){
			while( (charStack[top] != '(') && (top >= 0) && (orderTranslate(exp.at(i)) <= orderTranslate(charStack[top])) ){
				postfix += charStack[top];
				top--;
			}
			charStack[++top] = exp.at(i);
		}
		else{
			charStack[++top] = exp.at(i);
		}
	}
	
	while(top >= 0){
		postfix += charStack[top--];
	}
	
	cout<<"Expression: "<<exp<<endl;
	cout<<"Postfix: "<<postfix<<endl;
	
	
}

int orderTranslate(char input){
	if(input == '^'){
		return 4;
	}
	else if(input == '*'){
		return 2;
	}
	else if(input == '/'){
		return 2;
	}
	else if(input == '+'){
		return 1;
	}
	else if(input == '-'){
		return 1;
	}
}



