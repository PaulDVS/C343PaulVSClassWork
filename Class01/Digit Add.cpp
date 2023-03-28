#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	int digits;
	int sum =0;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	digits = int(log10(n)+1);
	
	for(int i=0; i<digits; i++)
	{
		sum += n%10;
		n= n/10;
	}
	
	cout<<"The sum of the digits of n is "<<(sum);
}
