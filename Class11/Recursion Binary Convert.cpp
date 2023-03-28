#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string binaryConvert(int n){
	string output = "";
	
	if(n == 0){
		return "";
	}
	else{
		output += binaryConvert(n/2);
		int temp = n%2;
		string tempString;
		stringstream ss;
		ss << temp;
		ss >> tempString;
		output += tempString;
		return output;
	}
	
}


int main()
{
	int inputValue;
	string outputValue;
	
	cin>>inputValue;
	
	outputValue = binaryConvert(inputValue);
	
	cout<<outputValue<<endl;
}
