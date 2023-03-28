#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	int temp=0;
	int digits;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	digits = int(log10(n)+1);
	
	temp = n%10;
	n = n/10;
	n = n+ temp*int(pow(10,digits-1));	
		
	cout<<"The new value is "<<(n);
}
