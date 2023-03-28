#include<iostream>
#include<string>
using namespace std;

bool palindromeCheck(string n){
	if(n.size() == 0 || n.size() == 1){
		return true;
	}
	else{
		if( (n.at(0) == n.at(n.size()-1)) && palindromeCheck(n.substr(1, n.size()-2)) ){
			return true;
		}
		else{
			return false;
		}
	}
}

int main()
{
	string inputValue;
	bool outputValue;
	
	getline(cin, inputValue);
	
	outputValue = palindromeCheck(inputValue);
	
	if(outputValue){
		cout<<"Is a Palindrome"<<endl;
	}
	else{
		cout<<"Isn't' a Palindrome"<<endl;
	}
}
