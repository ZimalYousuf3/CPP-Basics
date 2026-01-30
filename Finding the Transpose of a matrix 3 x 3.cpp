#include <iostream>
using namespace std;
int main()
{
	int row = 3 ,col = 3 ;
	int matrix [row][col] , transpose [row][col] ;
	int i , j ;
	
	cout << " Enter the any 9 elements for matrix: " ;
	
	for( i=0 ; i<row ; i++ )
	{
		for ( j=0 ; j<col ; j++ )
		cin >> matrix[i][j] ;
	}
		cout << endl ;
	
	cout << " The Matrix:- " << endl ;
	for( i=0 ; i<row ; i++ )
	{
		for ( j=0 ; j<col ; j++ )
		cout << " " << matrix[i][j] << " " ;
		cout << endl ;
	}
		cout << endl ;
	
	for( i=0 ; i<row ; i++ )
	{
		for(j=0 ; j<col ; j++)
		transpose[j][i] = matrix[i][j];
	}
	
	cout << " The transpose:- "<< endl ;
	for ( i=0 ; i<row ; i++ )
	{
		for ( j=0 ; j<col ; j++ )
		cout << " "<< transpose[i][j] << " " ;
		cout << endl ;
	}
	return 0 ;
}