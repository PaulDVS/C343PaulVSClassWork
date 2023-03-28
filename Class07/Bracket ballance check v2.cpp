#include<iostream>
#include<string>

using namespace std;

int main(){
	string userInput;
	char bracketStack[99];
	int top = -1;
	int ballanced = 0;
	
	cout<<"Please enter sentence: "<<endl;
	
	getline(cin, userInput);
	
	cout<<"User input is: "<<userInput<<endl;
	
	for(int i = 0; i < userInput.size(); i++){
		if(userInput.at(i) == '(' || userInput.at(i) == '{' || userInput.at(i) == '[' ){
			bracketStack[++top] = userInput.at(i);
		}
		else if(userInput.at(i) == ')' || userInput.at(i) == '}' || userInput.at(i) == ']' ){
			if((userInput.at(i) == ')') && (bracketStack[top] == '(') ){
				bracketStack[top] = ' ';
				top--;
			}
			else if((userInput.at(i) == '}') && (bracketStack[top] == '{') ){
				bracketStack[top] = ' ';
				top--;
			}
			else if((userInput.at(i) == ']') && (bracketStack[top] == '[') ){
				bracketStack[top] = ' ';
				top--;
			}
			else{
				ballanced = 1;
				i = userInput.size();
			}
		}
	}
	if((ballanced == 0) && top == -1){
		cout<<"Brackets are ballanced"<<endl;
	}
	else
	{
		cout<<"Brackets are unballanced"<<endl;
	}
}
