#include<iostream>
#include<vector>

using namespace std;

void mergeArr(vector<int> &a, vector<int> &b, vector<int> &c, int startA, int startB){
	if(startA >= a.size()){
		c.at(startA+startB) = b.at(startB);
		startB++;
	}
	else if(startB >= b.size()){
		c.at(startA+startB) = a.at(startA);
		startA++;
	}
	else if(a.at(startA) < b.at(startB)){
		c.at(startA+startB) = a.at(startA);
		startA++;
	}
	else{
		c.at(startA+startB) = b.at(startB);
		startB++;
	}
	
	if(startA < a.size() || startB < b.size()){
		mergeArr(a,b,c, startA, startB);
	}
}

vector<int> mergeSort(vector<int> &inputVec, int lb, int ub){
	vector<int> returnVec;
	returnVec.resize((ub-lb)+1);
	
	if(lb == ub){
		returnVec.at(0) = inputVec.at(lb);
		return returnVec;
	}
	
	int midPoint = (lb+ub)/2;
	
	vector<int> a((midPoint-lb)+1);
	vector<int> b(ub-midPoint);
	
	a = mergeSort(inputVec, lb, midPoint);
	b = mergeSort(inputVec, midPoint+1, ub);
		
	mergeArr(a, b, returnVec, 0, 0);
		
	return returnVec;
}



int main()
{
	vector<int> a(8);
	int size = a.size();
		
	for(int i = 0; i<size; i++){
		cout<<"Enter value at index "<<i<<endl;
		cin>>a.at(i);
	}
	
	a = mergeSort(a, 0, size-1);
	
	cout<<endl;
	for(int i = 0; i<size; i++){
		cout<<a.at(i)<<" ";
	}
}
