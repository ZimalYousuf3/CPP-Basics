#include <iostream>
using namespace std;
int main()
{
	// Method - 1: Declaration without initialization
	int array_1 [5] ;
	
	// Method - 2: Declaration with initialization
	int array_2 [5] = { 2,4,6,8,10 } ;
	cout << " Array 2: " ;
	
	for ( int i=0 ; i<5 ; i++ )
	{
		cout << array_2 [i] << " " ;
	}
	cout << endl ;
	
	// Method - 3: Size inferred from initialiazation
	int array_3 [] = { 2,4,6,8,10 } ;
	cout << " Array 3: " ;
	
	for ( int i=0 ; i<5 ; i++ )
	{
		cout << array_3 [i] << " " ;
	}
	cout << endl ;
	
	// Method 4: Partial initialization (rest auto-initialized to 0)
	int array_4 [5] = { 2,4,6 } ;    
	cout << " Array 4: " ;
	
	for ( int i=0 ; i<5 ; i++ )
	{
		cout << array_4 [i] << " " ;
	}
	cout << endl ;
	
	// Method 5: All elements initialized to 0
	int array_5 [5] = {0} ;
	cout << " Array 5: " ;
	
	for ( int i=0 ; i<5 ; i++ )
	{
		cout << array_5 [i] << " " ;
	}
	cout << endl ;
	
	return 0 ;
}


