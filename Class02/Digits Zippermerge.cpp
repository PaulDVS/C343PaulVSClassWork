#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	int m;
	int digitsN;
	int digitsM;
	int temp;
	int op=0;
	
	cout<<"n = ";
	cin>>n;
	cout<<"\n";
	cout<<"m = ";
	cin>>m;
	cout<<"\n";
	
	digitsN = int(log10(n)+1);
	digitsM = int(log10(m)+1);
	
	for(int i=1; i<=digitsN || i<=digitsM; i ++)
	{
		if(digitsN-i>=0)
		{
			op=op*10;
			temp = int(n/pow(10,digitsN-i));
			op+=temp%10;
		}
		if(digitsM-i>=0)
		{
			op=op*10;
			temp = int(m/pow(10,digitsM-i));
			op+=temp%10;
		}
	}
	cout<<"op = "<<op;
	
}
