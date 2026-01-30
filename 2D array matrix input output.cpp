#include <iostream>
using namespace std ;
int main ()
{
	int matrix[3][3] ;
	int rows = 3 , cols = 3 ;
	
	cout << " Enter values for matrix: " ;
	// INPUT
	for( int i=0 ; i<rows ; i++ )
	{
		for( int j=0 ; j<cols ; j++ )
		{
			cin >> matrix[i][j] ;
		}
	}
	
	// OUTPUT
	for( int i=0 ; i<rows ; i++ )
	{
		for( int j=0 ; j<cols ; j++ )
		{
			cout << matrix[i][j] << " " ;
		}
		cout << endl; 
	}
	
	return 0 ;
}