#include<iostream>
#include<vector>

using namespace std;

vector<int> minHeap;

int main()
{
	
	int input;
	int size;
	int curr = 0;
	int j;
	int temp;
	
	cout<<"Please enter the size of the heap"<<endl;
	cin>>size;
	
	minHeap.resize(size+1);
	
	for(int i=1; i<size+1; i++){
		cin>>input;
		minHeap.at(i) = input;
		curr++;
		j = i;
		 
		while(j/2>0){
			if(minHeap.at(j) < minHeap.at(j/2)){
				temp = minHeap.at(j);
				minHeap.at(j) = minHeap.at(j/2);
				minHeap.at(j/2) = temp;
			}
			else{
				break;
			}
			j = j/2;
		}
	}
	
	for(int i=0; i<minHeap.size(); i++){
		cout<<i<<": "<<minHeap.at(i)<<" |";
	}
	
	cout<<endl;
	
	//delete node
	int k = 1;
	minHeap.at(k) = minHeap.at(curr);
	minHeap.at(curr) = 0;
	curr--;
	
	while(k*2<curr)
	{
		if( minHeap.at(k*2) < minHeap.at((k*2)+1) ){
			if( minHeap.at(k) > minHeap.at(k*2) ){
				swap(minHeap.at(k), minHeap.at(k*2) );
				k = k*2;
			}
			else{
				break;
			}
		}
		else{
			if( minHeap.at(k) > minHeap.at((k*2)+1) ){
				swap(minHeap.at(k), minHeap.at((k*2)+1) );
				k = (k*2)+1;
			}
			else{
				break;
			}
		}
	}
	
	for(int i=0; i<=curr; i++){
		cout<<i<<": "<<minHeap.at(i)<<" |";
	}
	cout<<endl;
}
