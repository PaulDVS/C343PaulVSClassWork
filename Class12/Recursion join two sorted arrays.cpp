#include<iostream>
#include<vector>

using namespace std;

void mergeArr(vector<int> &a, vector<int> &b, vector<int> &c, int startA, int startB){
	if(startA >= a.size()){
		c.resize(c.size()+1);
		c.at(c.size()-1) = b.at(startB);
		startB++;
	}
	else if(startB >= b.size()){
		c.resize(c.size()+1);
		c.at(c.size()-1) = a.at(startA);
		startA++;
	}
	else if(a.at(startA) < b.at(startB)){
		c.resize(c.size()+1);
		c.at(c.size()-1) = a.at(startA);
		startA++;
	}
	else{
		c.resize(c.size()+1);
		c.at(c.size()-1) = b.at(startB);
		startB++;
	}
	
	if(startA < a.size() || startB < b.size()){
		mergeArr(a,b,c, startA, startB);
	}
}


int main()
{
	vector<int> a;
	int sizeA;
	vector<int> b;
	int sizeB;
	
	vector<int> c;
	
	cout<<"Input size of first array "<<endl;
	cin>> sizeA;
	a.resize(sizeA);
	
	cout<<"Input size of second array "<<endl;
	cin>> sizeB;
	b.resize(sizeB);
	
	for(int i = 0; i<sizeA; i++){
		cout<<"For the First array enter value at index "<<i<<endl;
		cin>>a.at(i);
	}
	
	for(int i = 0; i<sizeB; i++){
		cout<<"For the Second array enter value at index "<<i<<endl;
		cin>>b.at(i);
	}
	
	mergeArr(a,b,c, 0, 0);
	
	cout<<endl;
	for(int i = 0; i<c.size(); i++){
		cout<<c.at(i)<<" ";
	}
}
