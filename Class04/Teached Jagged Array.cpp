//JaggedArray with pointers
#include<iostream>
using namespace std;

int main()
{
	int rows;
    cout << "Enter rows: ";
    cin >> rows;
    int *colsArray = new int[rows]; /// array to store no of columns
    int **array=new int*[rows];   /// jagged array  
	for(int i=0; i<rows; i++){
        cout<< "Enter no of col in row"<< i<< ": ";
        cin>> colsArray[i];
        array[i]=new int[colsArray[i]];
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j< colsArray[i]; j++){
            cout<<"Rows "<< i<<": Enter value"<< j <<": ";
            cin>> array[i][j];
        }
    }
    cout<< "display"<< endl;
    for(int i=0; i< rows ; i++)
	{
        for(int j=0; j< colsArray[i]; j++)
		{
            cout<< array[i][j]<< " ";
        }
        cout<< "\n";
    }
    cout<< "address display"<< endl;
    for(int i=0; i< rows ; i++){
        for(int j=0; j< colsArray[i]; j++)
		{
            cout<< &array[i][j]<< " ";
        }
        cout<< "\n";
    }
    cout<< "Dellocating the array..."<< endl;
    for(int i=0; i<rows; i++){
       delete [] array[i];
   }
}
