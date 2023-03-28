#include<iostream>

using namespace std;

int occString(string n, string findValue, int pos){
	int occValue = 0;
	
	if(n.find(findValue, pos) != string::npos){
		occValue = 1 + occString(n, findValue, n.find(findValue, pos)+1);
	}
	return occValue;
}

int main()
{
	string inputValue;
	string findValue;
	int occValue;
	
	cout<<"Enter input sentence: "<<endl;
	getline(cin, inputValue);
	
	cout<<"Enter string to find "<<endl;
	getline(cin, findValue);
	
	occValue = occString(inputValue, findValue, 0);
	
	cout<<findValue<< " occured " <<occValue<< " times"<<endl;
}
