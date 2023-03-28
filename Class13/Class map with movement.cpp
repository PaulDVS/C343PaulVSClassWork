#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

class Map
{
	int coordX;
	int coordY;
	int sizeX;
	int sizeY;
	
    public:
    	Map(int x = 5, int y=4);
    	void move(int c);
    	void showMap();
};

Map::Map(int x, int y){
	sizeX = x;
	sizeY = y;
	coordX = x-1;
	coordY = 0;
}

void Map::move(int c){
	int key;
	
	if(c && c!= 224){
		cout<<"Not an arrow key";
	}
	else{
		switch(key = getch())
		{
				//Up
			case 72:
				if(coordX > 0){
					coordX--;
				}
				else{
					cout<<"Already at the top of the map"<<endl;
				}
				break;
				//Left
			case 75:
				if(coordY > 0){
					coordY--;
				}
				else{
					cout<<"Already at the left side of the map"<<endl;
				}
				break;
				//Right
			case 77:
				if(coordY < sizeY-1){
					coordY++;
				}
				else{
					cout<<"Already at the right side of the map"<<endl;
				}
				break;
				//Down
			case 80:
				if(coordX < sizeX-1){
					coordX++;
				}
				else{
					cout<<"Already at the bottom of the map"<<endl;
				}
				break;
		}
	}
	
}

void Map::showMap(){
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	
	for(int i=0; i<sizeX; i++){
		for(int j=0; j<sizeY; j++){
			cout<<"====";
		}
		cout<<"==="<<endl;
		for(int j=0; j<sizeY; j++){
			cout<<"|";
			if(coordX == i && coordY == j){
				SetConsoleTextAttribute(hConsole, 43);
				cout<<" 1 ";
				SetConsoleTextAttribute(hConsole, 15);
				cout<<"|";
			}
			else{
				cout<<" 0 |";
			}
		}
		cout<<endl;
	}
	for(int j=0; j<sizeY; j++){
		cout<<"====";
	}
	cout<<"==="<<endl;
}

int main()
{
	Map currentMap(5, 4);
	bool endFlag = false;
	
	int c;
	
	do{
		currentMap.showMap();
		
		cout<<endl;
		cout<<"Please enter next move";
		c = getch();
		cout<<endl;
		
		currentMap.move(c);
		
	}while(!endFlag);
}
