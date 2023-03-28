#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

void roll(int player); //Creates a random number and moves player piece forwards, calls spaceCheck
void spaceCheck(int player); //Check contents of space, moves piece depending on snake/ladder or ends game.



char board[100];
string playerNames[2];
int playerPieces[2] = {0,0};
int flag = 0;


int main()
{
	string ch;
	
	for(int i = 0; i<100; i++)//Set up board with empty;
	{
		board[i] = 120;
	}
	board[6] = 40;// Ladders contain values 1-50 and move forward
	board[19] = 24;
	board[52] = 19;
	board[57] = 41;
	 
	board[47] = 88; //Snakes contain values 51-100 and move backwards;
	board[62] = 72; //50 added to space change value to place between 51 and 100 
	board[96] = 71;
	
	
	cout<<"Please enter player 1's name: "<<endl;
	cin>>playerNames[0];
	cout<<endl;
	
	cout<<"Please enter player 2's name: "<<endl;
	cin>>playerNames[1];
	cout<<endl;
	
	do
	{
		cout<<endl;
		cout<<"Player: "<<playerNames[0]<<"'s turn."<<endl;
		cout<<"Press any key to roll dice: "<<endl;
		cin>>ch;
		cout<<endl;
		roll(0);
		
		if(flag == 0)
		{
			cout<<endl;
			cout<<"Player: "<<playerNames[1]<<"'s turn."<<endl;
			cout<<"Press any key to roll dice: "<<endl;
			cin>>ch;
			cout<<endl;
			roll(1);
		}
		
		
	}while(flag == 0);
	
	cout<<"Game has ended. Thank you for playing."<<endl;
}

void roll(int player)
{
	int diceRoll;
	
	srand((unsigned) time(NULL));
	
	diceRoll = (rand() % 6) + 1;
	
	cout<<"Player: "<<playerNames[player]<<" has rolled: "<<diceRoll<<endl;
	cout<<"Player's piece has moved from "<<playerPieces[player]<<endl;
	
	playerPieces[player] += diceRoll;
	
	cout<<"Player's piece has moved to "<<playerPieces[player]<<endl;
	
	spaceCheck(player);
}

void spaceCheck(int player)
{
	if(playerPieces[player]>99)
	{
		flag = 1;
		cout<<"Player: "<<playerNames[player]<<" has reached the end of the the board and won."<<endl;
	}
	else if(board[playerPieces[player]] != 120)
	{
		if(board[playerPieces[player]] < 51)
		{
			cout<<"Player: "<<playerNames[player]<<" has landed on a ladder."<<endl;
			cout<<"Player's piece has moved from "<<playerPieces[player]<<endl;
			
			playerPieces[player] += (board[playerPieces[player]]);
			
			cout<<"Player's piece has moved to "<<playerPieces[player]<<endl;
		}
		else
		{
			cout<<"Player: "<<playerNames[player]<<" has landed on a snake."<<endl;
			cout<<"Player's piece has moved from "<<playerPieces[player]<<endl;
			
			playerPieces[player] -= ((board[playerPieces[player]]) - 50);
			
			cout<<"Player's piece has moved to "<<playerPieces[player]<<endl;
		}
	}
}
