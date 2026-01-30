#include <iostream>
using namespace std ;
int main ()
{
	const int size = 6 ;
	int copiedArray [size] , reversedArray [size] ;
	int originalArray [size] = { 1,2,3,4,5,6 } ;
	
	cout << " Original Array: " ;
	for ( int i=0 ; i<size ; i++ )
	{
		cout << originalArray [i] << " " ;
	}
	cout << endl ;
	
	cout << " Copied Array: " ;
	for ( int i=0 ; i<size ; i++ )
	{
		copiedArray [i] = originalArray [i] ;
	}
	
	for ( int i=0 ; i<size ; i++ )
	{
		cout << copiedArray [i] << " " ;
	}
	cout << endl ;
	
	cout << " Reversed Array: " ;
	for ( int i=0 ; i<size ; i++ )
	{
		reversedArray[i] = originalArray [size-1-i] ;
	}
	
	for ( int i=0 ; i<size ; i++ )
	{
		cout << reversedArray [i] << " " ;
	}
	cout << endl ;
	
	return 0 ;
}


