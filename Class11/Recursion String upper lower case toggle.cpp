#include<iostream>
#include<string>
using namespace std;

string caseToggle(string n){
	string output = "";
	if(n.size() == 0){
		return "";
	}
	else if(n.size() == 1){
		if(isupper(n.at(0))){
			output +=tolower(n.at(0));
			return output;
		}
		else{
			output +=toupper(n.at(0));
			return output;
		}
	}
	else{
		if(isupper(n.at(0))){
			output = tolower(n.at(0)) ;
			output += caseToggle(n.substr(1));
			return output;
		}
		else{
			output = toupper(n.at(0)) ;
			output += caseToggle(n.substr(1));
			return output;
		}
	}
}


int main()
{
	string inputValue;
	string outputValue;
	
	getline(cin, inputValue);
	
	outputValue = caseToggle(inputValue);
	
	cout<<outputValue<<endl;
}
