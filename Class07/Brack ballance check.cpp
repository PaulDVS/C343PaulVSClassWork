#include<iostream>
#include<string>

using namespace std;

int main(){
	string userInput;
	string temp1;
	string temp2;
	int endLoop;
	
	userInput = "(a+b)";
	temp1 = userInput;
	endLoop = 0;
	
	while(endLoop == 0){
		if(temp1.find('(') != string::npos){
			temp2 = temp1.substr(temp1.find('('), temp1.size()-temp1.find('('));
			temp1 = temp1.replace(temp1.find('('), 1, " ");
			if(temp2.find(')')){
				temp1 = temp2.replace(temp2.find(')'), 1, " ");
			}
			else{
				cout<<"Brackets () are unballanced"<<endl;
				endLoop = 1;
			}
		}
		else if(temp1.find(')') != string::npos){
			cout<<"Brackets () are unballanced"<<endl;
			endLoop = 1;
		}
		else if(temp1.find('{') != string::npos){
			temp2 = temp1.substr(temp1.find('{'), temp1.size()-temp1.find('{'));
			temp1 = temp1.replace(temp1.find('{'), 1, " ");
			if(temp2.find('}')){
				temp1 = temp2.replace(temp2.find('}'), 1, " ");
			}
			else{
				cout<<"Brackets {} are unballanced"<<endl;
				endLoop = 1;
			}
		}
		else if(temp1.find('}') != string::npos){
			cout<<"Brackets {} are unballanced"<<endl;
			endLoop = 1;
		}
		else if(temp1.find('[') != string::npos){
			temp2 = temp1.substr(temp1.find('['), temp1.size()-temp1.find('['));
			temp1 = temp1.replace(temp1.find('['), 1, " ");
			if(temp2.find(']')){
				temp1 = temp2.replace(temp2.find(']'), 1, " ");
			}
			else{
				cout<<"Brackets [] are unballanced"<<endl;
				endLoop = 1;
			}
		}
		else if(temp1.find(']') != string::npos){
			cout<<"Brackets [] are unballanced"<<endl;
			endLoop = 1;
		}
		else{
			cout<<"Brackets are ballanced"<<endl;
			endLoop = 1;
		}
	}
	
	cout<<"User input: "<<userInput<<endl;
	cout<<"Check: "<<temp1<<endl;
}
