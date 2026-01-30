#include <iostream>
using namespace std ;
int main ()
{
	int numbers [4] = { 1 , 3 , 5 , 7 } ;
	string names [4] = { "Taylor" , "Billie" , "Lana" , "Olivia"  } ;
	char alphabets [4] = { 'A' , 'B' , 'C' , 'D' } ;
	
	// Range based for loop 
	cout << " NUMBERS " << endl ;
	for ( int num : numbers )
	{
		cout << num << " " ;
	}
	cout << endl ;
	
	// Range based for loop using reference operator
	cout << " NAMES " << endl ;
	for ( string &name : names )
	{
		cout << name << " " ;
	}
	cout << endl ;
	
	// Range based for loop using auto keyword
	cout << " ALPHABETS " << endl ;
	for ( auto alpha : alphabets )
	{
		cout << alpha << " " ;
	}
	
	return 0 ;
}