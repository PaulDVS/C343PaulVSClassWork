#include<iostream>
using namespace std;

int main()
{
	
	char s[100];
	char s2[100];
	int n;
	int j=0;
	int flag = 0;
	
	cout<<"Please enter the String: "<<endl;
	gets(s);
	n = sizeof(s)/sizeof(s[0]);
	cout<<"\n";
	
	cout<<"In the String entered is: "<<s<<endl;

	for(int i=0; i<n; i++){
		if(flag == 0 || !(isspace(s[i])) )
		{
			s2[j]=s[i];
			j++;
			
			if(isspace(s[i])){
				flag = 1;
			}
			else
			{
				flag = 0;
			}
		}
	}

	cout<<"The String without excess spaces is: "<<s2<<endl;	
	
}

