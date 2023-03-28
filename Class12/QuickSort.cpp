#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int> &a, int  lb, int ub){
	int start = lb;
	int end = ub;
	int pivot = a.at(start);
	int temp;
	
	while(start<end){
		while(pivot >= a.at(start) && start<a.size()){
			start++;
		}
		while(pivot < a.at(end)){
			end--;
		}
		if(start<end){
			temp = a.at(start);
			a.at(start) = a.at(end);
			a.at(end) = temp;
		}
	}
	
	temp = a.at(lb);
	a.at(lb) = a.at(end);
	a.at(end) = temp;
	
	return end;
}

void quicksort(vector<int> &a, int lb, int  ub){
	if(lb<ub){
		int loc = partition(a, lb, ub);
		quicksort(a, lb, loc-1);
		quicksort(a, loc+1, ub);
	}
}


int main()
{
	vector<int> a(8);
	int size = a.size();
		
	for(int i = 0; i<size; i++){
		cout<<"Enter value at index "<<i<<endl;
		cin>>a.at(i);
	}
	
	quicksort(a, 0, size-1);
	
	cout<<endl;
	for(int i = 0; i<size; i++){
		cout<<a.at(i)<<" ";
	}
}
