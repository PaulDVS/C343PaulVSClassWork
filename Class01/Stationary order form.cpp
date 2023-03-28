#include<iostream>

using namespace std;

int main()
{
	int paper,ink,marker,pen;
	string choice;
	int bill;

	cout<<"Would you like to buy some Paper? y/n ";
	cin>>choice;
	
	if(choice == "y")
	{
		cout<<"Paper Costs £20 ";
		cout<<"Please enter how much Paper you want to order: ";
		cin>>paper;
	}
	else
		paper = 0;
	
	cout<<"Would you like to buy some Ink? y/n ";
	cin>>choice;
		
	if(choice == "y")
	{
		cout<<"Ink Costs £10 ";
		cout<<"Please enter how much Ink you want to order: ";
		cin>>ink;
	}
	else
		ink = 0;
	
	cout<<"Would you like to buy some Markers? y/n ";
	cin>>choice;
		
	if(choice == "y")	
	{
		cout<<"Markets Costs £5 ";
		cout<<"Please enter how many Markers you want to order: ";
		cin>>marker;
	}
	else
		marker = 0;
	
	cout<<"Would you like to buy some Markers? y/n ";
	cin>>choice;
		
	if(choice == "y")
	{
		cout<<"Pen Costs £3 ";
		cout<<"Please enter how many Pens you want to order: ";
		cin>>pen;
	}
	else
		pen = 0;
	
	
	bill = ((paper*20) + (ink*10) + (marker*5) + (pen*3));
	
	
	cout<<"Your bill is ";
	cout<<bill;

}
