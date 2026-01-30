#include <iostream>
using namespace std ;
int main ()
{
	int safeArray [3] = { 2,4,6 } ;
	int otherVar = 1000 ;
	
	// Safe Array
	cout << " --- Safe Array --- " << endl ;
	cout << " " ;
	for ( int i = 0 ; i<3 ; i++ )
	{
		cout << safeArray [i] << " " ;
	}
	cout << endl ;
	
	cout << " Another variable: " << otherVar << endl ;
	
	// DANGEROUS : Accessing out of bounds 
	cout << " --- Accessing out of bounds --- " << endl ;
	cout << " " << safeArray [3] << endl ;
	cout << " " << safeArray [-1] << endl ;
	
	// Modifying out of bounds
	cout << " --- Modifying out of bounds --- " << endl ;
	safeArray [5] = 999 ;
	cout << " " << safeArray [5] << endl ;
	 
	cout << " --- Accessing another variable again (might be changed) --- " << endl ;
	cout << " " << otherVar ;
	
	return 0 ;
}


