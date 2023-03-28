#include<iostream>

using namespace std;

int sumDigits(int n){
	int sum;
	
	if(n == 0){
		return 0;
	}
	else if(n%2 == 1){
		sum = n%10;
		sum += sumDigits(n/10);
		return sum;
	}
	else{
		sum = sumDigits(n/10);
		return sum;
	}
}


int main()
{
	int inputValue;
	int sumValue;
	
	cin>>inputValue;
	
	sumValue = sumDigits(inputValue);
	
	cout<<sumValue<<endl;
}




