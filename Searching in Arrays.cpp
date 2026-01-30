#include <iostream>
using namespace std ;
int main ()
{
	bool found ;
	const int size = 5 ;
	int arr [size] = { 2,9,3,9,5 } ;
	int searchValue ;
	
	// Displaying Array
	cout << " Array: " ;
	for ( int display : arr )
	cout << display << " " ;
	cout << endl ;
	
	cout << " Enter the search value: " ;
	cin >> searchValue ;
	
	int position [size] , posCount = 0 ;
	for ( int i=0 ; i<size ; i++ )
	{
		if ( arr [i] == searchValue )
		{
			position [posCount++] = i ;
			found = true ;
		}
	}
	
	if (found)
	{
		cout << " Value " << searchValue << " found at position: " ;
		for ( int i=0 ; i<posCount ; i++ )
	    {
		    cout << position [i] ;
			if(i < posCount - 1) 
			cout << " , "; 
	    }
	    cout << endl ;
		cout << " Target value is found " << posCount << " times. " << endl ;	
	}
	else
	{
		cout << " Target value not found! " ;
	}
	
	return 0 ;
}

