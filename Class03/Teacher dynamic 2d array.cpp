#include <iostream>
using namespace std;
int main() 
{  
	int ** a;
	int row, col, i, j;  
	cout << " Rows:" << endl;
	cin >> row;
	cout << " Columns:" << endl;
	cin >> col;  //Allocating the row
	a = new int * [row];  //Allocating the column
	
	for (i = 0; i < row; i++) {
		a[i] = new int[col];
	}
	
	//Giving inputs to the array
	cout << "Enter " << (row * col) << " numbers to the Array\n";
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			cout << "Enter the elements at Row " << i + 1 << " Column " << j + 1 << endl;
			cin >> a[i][j];
		}
	} 
	
	//Display the array
	cout << "Here is your 2D Array:" << endl;	
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
		cout << a[i][j] << ' ';
		}
		cout << endl;
	}  
	
	//Free the memory after the use of array
	for (i = 0; i < row; i++) {
		delete[] a[i];
	}  
	delete[] a;  
	return 0;
}
