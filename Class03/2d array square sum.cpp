#include <iostream>
using namespace std;
int main() 
{  
	int ** a;
	int size, i, j; 
	int sum;
	cout << " Size of 2d array:" << endl;
	cin >> size;
	a = new int * [size];  //Allocating the column
	
	for (i = 0; i < size; i++) {
		a[i] = new int[size];
	}
	
	//Giving inputs to the array
	cout << "Enter " << (size * size) << " numbers to the Array\n";
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			cout << "Enter the elements at Row " << i + 1 << " Column " << j + 1 << endl;
			cin >> a[i][j];
		}
	} 
	
	//Display the array
	cout << "Here is your 2D Array:" << endl;	
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}  
	
	//Display the array with calculatorions
	cout << "Here is your 2D Array with sums:" << endl;	
	for (i = 0; i < size; i++) {
		sum = 0;
		for (j = 0; j < size; j++) {
			cout << a[i][j] << ' ';
			sum+= a[i][j];
		}
		cout <<" = "<< sum << endl;
	} 
	cout<<"------------------------------------------------------";
	cout<<endl;
	for (i = 0; i < size; i++) {
		sum = 0;
		for (j = 0; j < size; j++) {
			sum+= a[j][i];
		}
		cout << sum << " ";
	}
	cout<<endl;
	
	//Diagonals
	sum = 0;
	for (i = 0; i < size; i++) {
		sum+= a[i][i];	
	}
	cout<<"Diagonal = "<< sum;
	cout<<endl;
	sum = 0;
	for (i = 0; i < size; i++) {
		sum+= a[i][size-1-i];	
	}
	cout<<"ReverseDiagonal = "<< sum;
	
	
	
	
	//Free the memory after the use of array
	for (i = 0; i < size; i++) {
		delete[] a[i];
	}  
	delete[] a;  
	return 0;
}
