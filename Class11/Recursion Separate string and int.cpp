#include<iostream>
#include<string>
#include<vector>
using namespace std;

void separate(string n, vector<string> &output){
	if(n.size() == 0){
		return;
	}
	else if(n.size() == 1){
		if(isalpha(n.at(0))){
			output.at(0).push_back(n.at(0));
		}
		else{
			output.at(1).push_back(n.at(0));
		}
	}
	else{
		if(isalpha(n.at(0))){
			output.at(0).push_back(n.at(0));
			separate(n.substr(1), output);
		}
		else{
			output.at(1).push_back(n.at(0));
			separate(n.substr(1), output);
		}
	}
	
}

int main()
{
	string inputValue;
	vector<string> output(2);
	
	getline(cin, inputValue);
	
	separate(inputValue, output);
	
	cout<<"String s = "<< output.at(0) <<endl;
	cout<<"Number  n = "<< output.at(1) <<endl;
}
