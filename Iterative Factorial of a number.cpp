#include <iostream>
using namespace std ;

	long long factorial (int num)
	{
		int fact = 1 ;
		for ( int i = 1 ; i <= num ; i++ )
		{
			fact *= i ;
		}
		return fact ;
	}
	
	int main ()
	{
		int num ;
		cout << " Enter a number: ";
		cin >> num ;
		
		if ( num < 0 )
		{
			cout << " Factorial is not defined for negative number! "<< endl ;
		}
		else
		{
			cout << " ! = " << factorial (num) << endl ;
		}
		return 0 ;
	}
