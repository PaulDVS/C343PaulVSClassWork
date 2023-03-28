#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	int digits;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	
	digits = int(log10(n)+1);
	
	cout<<"The number of digits of n is "<<(digits);
	
}
