#include <iostream>
using namespace std ;
int main ()
{
	int number [4] = { 1,3,5,7 } ;
	
	// Printing Original Array
	cout << " ----- Original Array ----- " << endl ;
	cout << " " ;
	for ( int i=0 ; i<4 ; i++ )
	{
		cout << number [i] << " ";
	} 
	cout << endl ;
	
	// Accessing elements through indices
	cout << " ----- Accessing through indices ----- " << endl ;
	cout << " 1st element: " << number [0] << endl ;
	cout << " 3rd element: " << number [2] << endl ;
	cout << " 4th element: " << number [3] << endl ;
	
	// Modifying the Array
	number [0] = number [2] - 3 ;
	number [3] = number [1] * 2 ;
	
	cout << " ----- Modified Array ----- " << endl ;
	cout << " " ;
	for ( int i=0 ; i<4 ; i++ )
	{
		cout << number [i] << " " ;
	} 
	cout << endl ;
	
	// Using calculated indices
	cout << " ----- Using calculated indices ---- " << endl ;
	int index = 3 ;
	cout << " Elements at index " << index << " is " << number [index] ;
	
	return 0 ; 
}




