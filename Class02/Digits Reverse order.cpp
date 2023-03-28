#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	int output=0;
	int digits;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	
	digits = int(log10(n)+1);
	
	for(int i = 0; i<digits; i++)
	{
		output = output*10;
		output += n%10;
		n = n/10;
	}
	
	cout<<"The new value is "<<(output);
}
