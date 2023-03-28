#include<iostream>

using namespace std;

int occString(string n, string findValue, int pos){
	int occValue = 0;
	bool check = false;
	int i;
	
	if(n.at(pos) == findValue.at(0)){
		check = true;
		for(i = 0; i<findValue.size(); i++){
			if(n.at(pos+i) != findValue.at(i)){
				check = false;
			}
		}
		if(check == true){
			occValue = 1 + occString(n, findValue, pos + i);
		}
	}
	else{
		occValue = occString(n, findValue, pos + 1);
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
